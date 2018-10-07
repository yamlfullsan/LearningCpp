//Para ejecutar en consola me funciono g++ y no gpp
// g++ -o nombreejecutable Prueba.cpp 
// ./nombreejecutable


//Programa de prueba.
#include<iostream>
#include<stdio.h>
using namespace std;

int main (){
    cout << "Hola Mundo" << endl;
   
    // int es tipo de dato entero.
    int entero= 15;
    cout << entero << endl;

    //float tipo de dato flotante (numeros con decimales)
    float flotante= 15.5;
    cout << flotante << endl;

    //double similar a float pero con mas memoria.
    double mayor= 16.3456;
    printf("%d,%s", entero , "\n"); //Aqui estoy usando printf en lugar de cout. revisar formato.
    
    //char variable tipo cualquier caracter usar comilla simple 
    char letra= 'a';
    cout << letra << endl;
    return 0;
}