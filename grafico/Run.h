#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <graphics.h>
#include "Pantalla.h"
#include "Boton.h"
#include "DibujarPunto.h"
using namespace std;

#if !defined(_PROGRAMA_H)
#define _PROGRAMA_H
class Programa{
private:

public:
	Programa();//contructor de la clase
	void run();//metodo que contiene el codigo a ejecutar	
};
#endif
