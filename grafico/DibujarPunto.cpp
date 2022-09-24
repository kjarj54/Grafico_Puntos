#include "DibujarPunto.h"

Punto::Punto(){
	ban=true;//variable que se le da un valor de true 
	valor=0;//variable inicializada en 0 para que no almacene basura del sistema
}

void Punto::dibujarPunto(){
	
	for(int  i=0; i<n; i++){//este ciclo se repite hasta alcanzar el numero de puntos que pidio el ususario
		setcolor(RED);//pinta el punto de color rojo
		circle(x[i],y[i],3);//se encarga de colocar el punto en x,y que pidio el usuario	
	}

	
	while(ban==true){//ciclo infinito 
		if(ismouseclick(WM_LBUTTONDOWN)){//cuando se de click con el mouse se ejecuta las instrucciones internas
			int x,y;//variables que guardan las pociniones que le devuelve la funcion getmouseclick
			getmouseclick(WM_LBUTTONDOWN,x,y);//funcion de grapihics que detecta el click del mouse y sus coordenadas
//			cout<<"x="<<x;
//			cout<<"Y="<<y;
			if(x>=4 && x<=1700 && y>=4 && y<= 1040){//unicamente se va a ejecutar las instrucciones mientras este en los limites establecidos
				setcolor(BLUE);//pinta de color azul
				circle(x, y, 3);//dibuja un punto	
			}
			if(x>=1707 && x<=1851 && y>=556 && y<=617){//unicamente se va a ejecutar las instrucciones mientras este en los limites establecidos
				closegraph();//cierra pantalla grafica
			}
		}
	}

}
void Punto::dibujarLinea(){
	for(int  i=0; i<n-1; i++){//este ciclo se repite hasta alcanzar el numero de puntos que pidio el ususario restandole 1 para que no haya un error
							  //y no se dibuje una linea de mas
		setcolor(GREEN);//pinta de color verde
		line(x[i],y[i],x[i+1],y[i+1]);//dibuja la linea entre el punto i y i+1
	}	
}
double Punto::laGrange(){
	
	cout<<"Ingrese el numero de Puntos que desea en pantalla: ";//pregunta al usuario la cantidad de puntos
	cin>>n;//introduce en una variable n
	for(int i=0; i<n; i++) {//ciclo for que se va utilizar para introducir los datos de vector para las coordenadas de los putnos en x
		cout<<"ingrese x[" << i << "]:";//pide coordenada de x
		cin>>x[i];//introduce en vector la coordenada de x 
	}
	cout<<endl;//salto de linea
	for(int i=0; i<n; i++) {//ciclo for que se va utilizar para introducir los datos de vector para las coordenadas de los putnos en y
		cout<<"ingrese y[" << i << "]:";//pide coordenada de y
		cin>>y[i];//introduce en vector la coordenada de y
	}
	
	cout<<endl;
	cout<<endl<<"ingrese z: ";
	cin>>z;
	for(int i=0; i<n ; i++) {
		l=y[i];
		for(int j=0; j<n; j++) {
			if(i!=j) {
				l=(l*(z-x[j]))/(x[i]-x[j]);
			}
		}
		valor=valor+l;
	}
	cout<<endl<<endl<<"El valor al polinomio de interpolacion en Z ="<<z<<" es : "<< valor<<endl;
	
}


