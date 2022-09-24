#include "Pantalla.h"
Pantalla::Pantalla(){
	
}

void Pantalla::abrir(){
    initwindow(getmaxwidth(),getmaxheight(),"Proyecto 1 Kevin Arauz",0,0,false,true);//inica la pantalla grafica
}

//void Pantalla::cerrar(){
//	closegraph();//cierra pantalla grafica
//}

void Pantalla::dibujarCuadro(){
	setcolor(WHITE);//pinta de blanco	
	bar(4,1041,1701,4);//dibuja un rectangulo 
}


void Pantalla::dibujarCuadricula(){
	for(int i=0;i<=104;i++){//pinta lineas horizontales
		setcolor(LIGHTGRAY);//pinta de gris
		line(4,i*10,1700,i*10);//dibuja linea
	}
	for(int i=0;i<=170;i++){//pinta lineas verticales
		setcolor(LIGHTGRAY);//pinta de gris
		line(i*10,4,i*10,1040);//dibuja linea
	}
}

void Pantalla::dibujarLine(){
	
	setlinestyle(SOLID_LINE,0,5);//se supone que debe dar un grosor mayor a la linea pero en mi caso no funciono
	setcolor(BLACK);//pinta de color negro
	line(4,500,1701,500);//dibuja la linea en las coordenadas esblecidas
	

}







