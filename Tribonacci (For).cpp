#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale (LC_CTYPE, "Spanish");
	int i, N1, N2, N3, Res, Sum;
	
	cout<<"ingrese Tres números pra la secuencia." <<endl;
	cout<<"Primer Dígito: "; cin >>N1;
	cout<<"Segundo Dígito: "; cin>>N2;
	cout<<"Tercer Dígito: "; cin>>N3;
	
	cout<<"ingrese la cantidad de veces que se sumaran los número: "; cin>>Sum;
	
	for (int i=1; i <= Sum; i++){
		if (i==1){
			cout <<"\n" <<N1 <<" ";
		}
		else if (i==2){
			cout <<N2 <<" ";
		}
		else if (i==3){
			cout <<N3 <<" ";
		}
		else{
		Res = N1 + N2 + N3;
		cout<<Res <<" ";
		
		N1 = N2;
		N2 = N3;
		N3 = Res;
		}
	}
	return 0;
	//Mario David Tereta Sapalun 0905-15-14297
}
