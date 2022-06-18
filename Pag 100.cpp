/* Cree un vector que almacene los 4 notas parciales y producidas por el usuario 
y al finalizar muestre la nota del segundo parcial este programa se hace con el
objrtivo de comprender como almacenar datos en un arreglo y como mostrar los mismos*/

#include <iostream>
using namespace std;
int main (){
	int vNota [4];
	int contador = 0;
	
	
	do{
			cout<<"ingrese la nota"<<contador +1<<":";
			cin>>vNota[contador];
			contador+=1;
			
	}while(contador<4);
	cout<<"\nla nota del segundo parcial:"<<vNota[1];

	
	return 0;
}
