//Calcule la media aritmética de 3 números cualesquiera.

#include<iostream>

int main(){

int a, b, c;
double promedio;

std::cout<<"Ingrese un numero: ";
std::cin>>a;
std::cout<<"Ingrese un numero: ";
std::cin>>b;
std::cout<<"Ingrese un numero: ";
std::cin>>c;

promedio=(a+b+c)/3;

std::cout<<"El promedio es: "<<promedio<<"\n";

    return 0;
}