#include <iostream>
using namespace std;
int main(){
    string contra = "EL BRRR";
    string password;
	cout<<"Ingrese su password:"<<endl;
	cin >> password;
	for (int i=1; i<5; i++){
		if(password == contra){
			cout<<"Contraseņa correcta! "<<endl;
			break;
		}else{
			cout<<"Contraseņa incorrecta, favor ingresar nuevamente: "<<endl;
			cin>> password;
		}if(i==4){
			cout <<"Haz realizado 5 intentos, tu celular ha sido bloqueado, CHEKE MI CHELE"<<endl;
		}
	}
	return 0;
}
