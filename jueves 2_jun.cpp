/*haga un programa que muestre todos los numeros para hasta llegar pares hasta llegar 
al numero x el numero sera capturado al iniciar el programa utilizando una estructura while*/

#include<iostream>
using namespace std;
int main(){
	int a = 0;
	int num;
	cout<<"Ingrese un numero: \n";
	cin>>num;
	while(a<num){
		if(a%2==0){
		cout<<a<< " el numero es par\n";	
		}
	a++;
    }
	return 0;
}
	
	
	
	

