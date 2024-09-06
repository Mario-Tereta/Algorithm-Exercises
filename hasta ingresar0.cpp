#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	int i, N1;
	i = 0;
	
	cout <<"Ingrese un numero: ";
	cin >>N1;
	
	while (N1 != 0){
		cout <<"Ingrese un numero: ";
		cin >>N1;
		i += 1;
	}
	
	cout <<"\ncantidad de numeros ingresados antes de 0: "<< i <<endl;
	
	return 0;
}
