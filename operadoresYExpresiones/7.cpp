//Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuánto deberá pagar finalmente por su compra.

#include<iostream>

int main (){

double compra, descuento=0.85,final;

std::cout<<"Cual es el valor de su compra: ";
std::cin>>compra;

final=descuento*compra;

std::cout<<"Usted debe pagar: "<<final<<" $\n";



    return 0;
}