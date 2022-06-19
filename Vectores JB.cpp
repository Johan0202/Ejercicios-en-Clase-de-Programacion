/* cree un vector que almacene las 4 notas
parciales y productivo por al
finalizar muestre la nota del segundo parcial
este programa se hace con el objetivo de comprender
como almacenar datos en un arreglo coo mostrar 
los mismos.
*/

#include<iostream>
using namespace std;
int main(){
	int vNota[4];
	int contador = 0;
	
	do{
		cout<< "Ingrese la nota"<<contador + 1<<":\n";
		cin>>vNota[contador];
		contador +=1;
		
		
	}while(contador<4);
	cout<<"\n La nota del segundo parcial es:"<<vNota[1]<<endl<<endl;
	
	system("pause");
	
	
	
	
	
	return 0;
}


