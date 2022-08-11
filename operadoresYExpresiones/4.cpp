//Hacer un Programa que calcule longitudes de Circunferencia.

#define _USE_MATH_DEFINES
#include<iostream>
#include <cmath>

int main(){

double radio, circunferencia;

std::cout<<"Ingrese el radio de una circunferencia: ";
std::cin>>radio;

circunferencia=2*radio*M_PI;

std::cout<<circunferencia<<"\n";;


    return 0;
}
