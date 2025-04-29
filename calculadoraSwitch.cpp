#include <iostream>

using namespace std;


int main(){
int numero1, numero2;
char option;

cout<<"ingrese el primer numero";
cin>> numero1;

cout<<"ingrese el segundo numero";
cin>> numero2;

cout<<"MENU:"<<endl;
cout<<"a. suma"<<endl;
cout<<"b. resta"<<endl;
cout<<"c. multiplicacion"<<endl;
cout<<"d. division"<<endl;
cout<<"eleccion:"<<endl;
cin>> option;

switch (option)
{
case 'a':
   
   option=numero1+numero2;
cout<<"el resultado de la suma es:"<<option<<endl;

    break;

case 'b':
   
   option=numero1-numero2;
cout<<"el resultado de la resta es:"<<option<<endl;

    break;
    /*caso c siempre escribir variables de caracter entre comillas simples*/
case 'c':
   
   option=numero1*numero2;
cout<<"el resultado de la multiplicacion es:"<<option<<endl;

    break;

case 'd':
   
   if(option=0){

option=numero1/numero2;
cout<<"el resultado de la division es:"<<option<<endl;
   }   else{
    cout<<"Error:Division por cero no se permite"<<endl;

   }
    break;




default:
cout <<"opcion invalida tienen que ser una opcion del a al d"<<endl;
    break;


    return 1;
}



    return 0;
}