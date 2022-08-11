//Hacer un Programa que calcule áreas de trapecios.
#include<iostream>

int main(){

int base1, base2, altura, area;

std::cout<<"Ingrese la primer base del trapecio: ";
std::cin>>base1;


std::cout<<"Ingrese la segunda base del trapecio: ";
std::cin>>base2;

std::cout<<"Ingrese la altura del trapecio: ";
std::cin>>altura;


area=altura*((base1+base2)/2);
std::cout<<"El area del trapecio es: "<<area<<"\n";


    return 0;
}
