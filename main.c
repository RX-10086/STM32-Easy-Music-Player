#include <stdio.h>
#include "guojige.h"        //曲谱

#define TRUE 1
#define FALSE 0
#define BASE_TUNE 700000

//以下为汇编函数
extern void GPIO_INIT(void);
extern void GPIOF_8_ON(void);
extern void GPIOF_OFF(void);
extern void Delay_Init(void);
extern void Delay_Ms(int ms);
extern void Delay_Us(int us);
extern int GPIOE_READ(void);

int MUSIC_ON = FALSE;

//蜂鸣器播放音符
void Beep_Sound(int freq, int time)   //time: 音符长度
{
	int delay_time = BASE_TUNE / freq;
	while(time > 0)
	{
		GPIOF_8_ON();
		Delay_Us(delay_time);     //频率转换为周期
		time--;
		GPIOF_OFF();
		Delay_Us(delay_time);
		time--;
	}
}

int main()
{
	int i = 0;
	int key = 0;
	GPIO_INIT();       //GPIO初始化
	Delay_Init();         //延时函数初始化
	while(TRUE)
	{
		key = GPIOE_READ();
		if(key == 0)
		{
			key = 0;
			MUSIC_ON = (MUSIC_ON == FALSE)?TRUE:FALSE;
		}
		if(MUSIC_ON == TRUE)
		{
			for(i = 0; i < 69; i++)
			{
				Beep_Sound(sound_freqs[guojige[i]], guojige_length[i]);
				Delay_Ms(guojige_delay[i]);     //音符与音符之间的间隔长度
				if(GPIOE_READ() == 0) 
				{
					MUSIC_ON = FALSE;
					i = 100;
					break;
				}
			}
			MUSIC_ON = FALSE;
		}
	}
}




