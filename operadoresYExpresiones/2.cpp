//Convertir Grados Celsius a Grados Fahrenheit.

#include<iostream>

int main(){

double c, f;

std::cout<<"Ingrese los grados Celsius ";
std::cin>>c;

f=(c*1.8)+32;
std::cout<<"El valor en grados Fahrenheit es: "<<f<<"\n";

    return 0;
}