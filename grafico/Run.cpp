#include"Run.h"

Programa::Programa(){
}

void Programa::run(){
    setlocale(LC_ALL,"");//actualiza la tabla ASCII para que salgan tildes y la letra ñ en pantalla
	
	Pantalla *P=new Pantalla();//creacion de puntero
	Boton *B=new Boton();//creacion de puntero
	Punto *Pu=new Punto();//creacion de puntero
	Pu->laGrange();//puntero apunta a un metodo
	P->abrir();//puntero apunta a un metodo
	B->botSalir();//puntero apunta a un metodo
	P->dibujarCuadro();//puntero apunta a un metodo
	P->dibujarCuadricula();//puntero apunta a un metodo
	P->dibujarLine();//puntero apunta a un metodo
	Pu->dibujarLinea();//puntero apunta a un metodo
	Pu->dibujarPunto();//puntero apunta a un metodo
	
	getch();
    delete P;//desocupar la memoria ocupada por el puntero
    delete B;//desocupar la memoria ocupada por el puntero
    delete Pu;//desocupar la memoria ocupada por el puntero

}




