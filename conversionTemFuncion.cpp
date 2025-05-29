#include <iostream>

using namespace std;

int convertion(int a) {

return (a*9/5)+32;
}

int main(){
    int x;
    cout<<"ingrese el valor de la temperatura en celcius"<<endl;
    cin>> x;

    cout<<"el valor de la temperatura es"<<convertion(x)<<endl;

    return 0;
}