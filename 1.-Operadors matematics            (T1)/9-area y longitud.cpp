//Ejercicio 9
#include<iostream>
#include<windows.h>
#include<cmath>
//cmath es como la libreria nueva y math.h es como la vieja
using namespace std;

int main (){
    float r, l, a;//r es igual a radio, a es igual a area i l igual a longitud
    float pi=M_PI;
    
    cout<<"Bienvenido, vamos a conseguir el area i longitud de tu circumferencia\n";
    
    cout<<"Para conseguir el area necesito el radio, escribalo:\n";
    cin>>r;
    
    //Estetica
    Sleep(500);
    system("cls");
    cout<<"Calculando.";
    Sleep(500);
    system("cls");
    
    cout<<"Calculando..";
    Sleep(500);
    system("cls");
    
    cout<<"Calculando...";
    Sleep(1000);
    system("cls");
    
    //Formulas
    //Comando del pi: hay que cargar la libreria de mates
    //pi=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    //Numero pi es M_PI
    l=2*pi*r;
    //a=pi*r^2;
    a=pi*pow(r,2);
    //pow es potencia en ingles
    //Elevarlo ^2
    
    cout<<"El area es:\n"<<a;
    cout<<"\n\nLa longitud es:\n"<<l<<"\n\n";
    
    system("pause");
    return 0;
}
