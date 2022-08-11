/*Un alumno desea saber cuál será su calificación final en la materia de Algoritmos.
Dicha calificación se compone de los siguientes porcentajes:
    • 55% del promedio de sus tres calificaciones parciales.
    • 30% de la calificación del examen final.
    • 15% de la calificación de un trabajo final.*/

#include<iostream>

int main(){

float parciales, examenFinal, trabajoFinal, notaFinal;

std::cout<<"Ingrese promedio de las calificaciones en parciales: ";
std::cin>>parciales;
std::cout<<"Ingrese la calificacion del examen final: ";
std::cin>>examenFinal;
std::cout<<"Ingrese la calificaion del trabajo final: ";
std::cin>>trabajoFinal;

notaFinal=parciales*0.55+examenFinal*0.30+trabajoFinal*0.15;

std::cout<<"Su calificacion en la materia es de: "<<notaFinal<<"\n";

    return 0;
}