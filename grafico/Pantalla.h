#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <graphics.h>
using namespace std;

#if !defined(_PANTALLA_H)
#define _PANTALLA_H
class Pantalla{	

public:
	Pantalla();//constructor
	void abrir();//metodo para abrir
//	void cerrar();//metodo para cerrar
	void dibujarCuadro();//metodo dibujar cuadro
	void dibujarCuadricula();//metodo dibujar la cuadricula
	void dibujarLine();//metodo dibujar linea que separa cuadrante I y IV de la grafica
};
#endif
