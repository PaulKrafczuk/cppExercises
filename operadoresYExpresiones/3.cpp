// Sacar la hipotenusa de un triángulo rectángulo, pidiendo al usuario el valor de los 2 catetos.
#include<iostream>
#include<cmath>

int main(){

double a, b, c;

std::cout<<"Ingrese el valor del primer cateto: ";
std::cin>>a;
std::cout<<"Ingrese el valor del segundo cateto: ";
std::cin>>b;

c=sqrt(pow(a,2)+pow(b, 2));

std::cout<<"El valor de la hipotenusa es: "<<c<<"\n";

    return 0;
}