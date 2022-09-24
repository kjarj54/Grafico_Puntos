#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <graphics.h>

using namespace std;
#if !defined(_PUNTO_H)
#define _PUNTO_H
class Punto{
private:
	bool ban;
	double x[50],y[50];
	double z,l,n;
	double valor;
public:	
	Punto();//constructor 	
	void dibujarPunto();//metoddo que une el dibujar y el getmouseclick
	void dibujarLinea();//metodo que une los puntos introducidos por el usuario mediante una linea
	double laGrange();//metodo que le pide algunas cosas al usuario para poder dibujar en la pantalla grafica
	
};


#endif

