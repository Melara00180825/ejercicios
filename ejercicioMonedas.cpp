#include <iostream>

using namespace std;

int main(){

float m;
int option;

cout<<"ingrese el valor de su moneda"<<endl;
cin>> m;

cout<<"MENU:"<<endl;
cout<<"1. de Dolar a Euro"<<endl;
cout<<"2. de Dolar a Pesos Argentinos"<<endl;
cout<<"3. de Dolar a Pesos Mexicanos"<<endl;
cout<<"Choose a option"<<endl;
cin>> option;

switch (option)
{
case 1:
    m= m*(0.88);

    cout<<"Tu moneda convertida a Euro es:"<<m<<endl;
    break;

    case 2:
    m= m*(1169.50);

    cout<<"Tu moneda convertida a Pesos Argentinos es:"<<m<<endl;
    break;

case 3:
    m= m*(19.59);

    cout<<"Tu moneda convertida a Pesos Mexicanos es:"<<m<<endl;
    break;


default:
    cout<<"Por favort ingresa una de las opciones que se te da y no otra"<<endl;
return 1;

    break;
}   
}