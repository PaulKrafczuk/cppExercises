//Pedir 2 números al usuario y sumarlos, restarlos, multiplicarlos y dividirlo

#include <iostream>

int main(){

double a, b;

std::cout<<"ingrese el primer numero: \n";
std::cin>>a;
std::cout<<"ingrese el segundo numero: \n";
std::cin>>b;

double suma=a+b, resta=a-b, mult=a*b, div=a/b; 

std::cout<<"la suma es: "<<suma<<"\n";
std::cout<<"la resta es: "<<resta<<"\n";
std::cout<<"la multiplicacion es: "<<mult<<"\n";
std::cout<<"la division es: "<<div<<"\n";


    return 0;
}