#include"Run.h"

int main(int argc, char** argv){
	
	cout<<"Univerdad nacional" 
        "\nSede Regional Brunca" 
        "\nProgamacion 1"
        "\nKevin Arauz Jimenez"
        "\nProfesor: Alejandro Flores Quesada" 
        "\n\n"
	<<endl; 	
	
	Programa *P= new Programa();//creacion de un puntero
	P->run();//El puntero apunta al metodo de la clase Programa
	delete P;//desocupar la memoria ocupada por el puntero
	return 0;
}
