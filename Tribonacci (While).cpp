#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale (LC_CTYPE, "Spanish");
	int i, N1, N2, N3, Res, Sum;
	i = 1;
	
	cout<<"ingrese Tres n�meros pra la secuencia." <<endl;
	cout<<"Primer D�gito: "; cin >>N1;
	cout<<"Segundo D�gito: "; cin>>N2;
	cout<<"Tercer D�gito: "; cin>>N3;
	
	cout<<"ingrese la cantidad t�rminos de la secuencia que desea ver: "; cin>>Sum;
	
	while (i<=Sum) {
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
		i++;
	}
	return 0;
}
	//Mario David Tereta Sapalun 0905-15-14297
