#include"Run.h"

int main(int argc, char** argv){
	
	cout<<"" 
        "\n" 
        "\n"
        "\n"
        "\nProfesor:" 
        "\n\n"
	<<endl; 	
	
	Programa *P= new Programa();//creacion de un puntero
	P->run();//El puntero apunta al metodo de la clase Programa
	delete P;//desocupar la memoria ocupada por el puntero
	return 0;
}
