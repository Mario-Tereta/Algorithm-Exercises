#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	setlocale(LC_CTYPE, "Spanish");
	int numeros[100], Num, Punteo=0;
	
	cout <<"Cuantos Número agrerá y que sean enteros para sabes su puntuación: ";
	cin>>Num; cout<<endl;
	
	for(int i=0;i < Num; i++){
		cout<<"Ingrese un dígito: ";
		cin>>numeros[i];
		
		if (numeros[i]==5){
			Punteo += 5;
		}
		else if(numeros[i] %2 == 0){
			Punteo +=1;
		}
		else{
			Punteo += 3;
		}
	}
	
	cout<<"\nEl Punteo obtenido de los " <<Num <<" números agregados es: " <<Punteo;
	return 0;
	//Mario David Tereta Sapalun 0905-15-14297
}
