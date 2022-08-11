//Calcular la cantidad de segundos que están incluidos en el número de horas, minutos y segundos ingresados por el usuario.

#include<iostream>

int main(){

float horas, minutos, segundos, totalSegundos;

std::cout<<"Ingrese un valor de horas: ",
std::cin>>horas;
std::cout<<"Ingrese un valor de minutos: ",
std::cin>>minutos;
std::cout<<"Ingrese un valor de segundo: ",
std::cin>>segundos;

totalSegundos=horas*3600+minutos*60+segundos;

std::cout<<"El total de segundos es: "<<totalSegundos<<"\n";

    return 0;
}
