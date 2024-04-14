#ifndef __GUOJIGE_H
#define __GUOJIGE_H

#define C_low 0
#define D_low 1
#define E_low 2
#define F_low 3
#define G_low 4
#define A_low 5
#define B_low 6

#define C_Mid 7
#define D_Mid 8
#define E_Mid 9
#define F_Mid 10
#define G_Mid 11
#define A_Mid 12
#define B_Mid 13

#define C_Hi 14
#define D_Hi 15
#define E_Hi 16
#define F_Hi 17
#define G_Hi 18
#define A_Hi 19
#define B_Hi 20

int sound_freqs[]={
     262,  294,  330,  349,  392,  440,  494,
     523,  587,  659,  698,  784,  880,  988,
    1046, 1175, 1318, 1397, 1568, 1760, 1976};

int guojige[]={
	G_Mid, C_Hi, B_Mid, D_Hi, C_Hi, G_Mid, E_Mid, A_Mid, A_Mid, F_Mid, 
	A_Mid, D_Hi, C_Hi, B_Mid, A_Mid, G_Mid, F_Mid, E_Mid,
	G_Mid, C_Hi, B_Mid, D_Hi, C_Hi, G_Mid, E_Mid, A_Mid, F_Mid, A_Mid, 
	D_Hi, C_Hi, B_Mid, D_Hi, F_Hi, B_Mid, C_Hi, 
	E_Hi, D_Hi, B_Mid, A_Mid, B_Mid, C_Hi, A_Mid, B_Mid, G_Mid, 
	G_Mid, F_Mid, G_Mid, A_Mid, A_Mid, D_Hi, C_Hi, B_Mid, 
	D_Hi, D_Hi, B_Mid, G_Mid, G_Mid, F_Mid, G_Mid, E_Hi, C_Hi, 
	A_Mid, B_Mid, C_Hi, B_Mid, D_Hi, C_Hi, A_Mid, G_Mid
};

int guojige_length[]={
	400, 400, 200, 200, 200, 200, 200, 250, 200, 200, 
	200, 400, 200, 200, 200, 200, 200, 350, 
	400, 200, 200, 200, 200, 200, 200, 200, 200, 300,
	200, 200, 200, 200, 200, 250, 200, 
	200, 200, 200, 200, 200, 200, 200, 200, 200,
	200, 200, 200, 200, 200, 300, 200, 200,
	200, 200, 200, 200, 200, 200, 200, 200, 200, 
	200, 200, 200, 200, 200, 200, 200, 200
};

int guojige_delay[]={
	200, 300, 100, 100, 100, 100, 100, 300, 100, 550, 
	100, 350, 100, 100, 100, 100, 100, 450, 
	200, 300, 100, 100, 100, 100, 100, 300, 100, 100,
	200, 200, 300, 300, 400, 100, 450, 
	100, 100, 500, 100, 100, 100, 100, 300, 100,
	100, 100, 100, 300, 100, 200, 100, 450,
	300, 300, 100, 100, 100, 100, 100, 300, 100, 
	100, 100, 100, 300, 300, 300, 300, 300
};
#endif
