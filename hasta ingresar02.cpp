#include <iostream>
using namespace std;

int main(){
    int numero, mayor = 0;
    do{
        cout<<"Ingresa un número: ";cin>>numero;
        if(numero>0){
            mayor+=1;
        }
    }while(numero>0);
    cout<<"\nValres mayores a cero introducidos: "<<mayor<<endl;

    return 0;
}
