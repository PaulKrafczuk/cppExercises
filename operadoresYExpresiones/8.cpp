//Dadas las horas trabajadas de una persona y el valor por hora. Calcular su salario e imprimirlo.

#include<iostream>

int main(){

double horas, valorPorHora, salario;

std::cout<<"Ingrese cuantas horas trabajo: ";
std::cin>>horas;
std::cout<<"Ingrese esl valor por hora: ";
std::cin>>valorPorHora;

salario=horas*valorPorHora;

std::cout<<"Su salario es de: "<<salario<<" $\n";



    return 0;
}