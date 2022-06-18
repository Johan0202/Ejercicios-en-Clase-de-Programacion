/* 
cree un programa que devuelve el promedio de x cantidad de numeros, el programa debe finalizar cuando el usuario  
ingrese el valor de cero
*/
#include <iostream>
using namespace std;
int main (){
	int contador= 0;
	float promedio;
	float acumulador;
	float num;
	while (num!=2)
	{
		cout<<" ingrese un numero :"<<endl;
		cin>> num; 
		acumulador = acumulador + num ;
		contador++;
    } 

	 return 0;
}

