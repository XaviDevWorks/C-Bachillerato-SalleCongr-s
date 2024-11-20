/*
Ejercicio 17
Pedir un número por pantalla en el rango [1 -3] 
y recoger por teclado. Transformar el número 
introducido en letras: “Es un uno” o “Es un dos” o “Es un tres”
*/

#include<iostream>
using namespace std;

int main (){
    int number;
    
    cout<<"Bienvenido!";
    
    cout<<"Dame un numero del 1 al 3";
    cin>>number;
    
    if(number<1&&number>3){cout<<"????"<<number;}
    else if(number==1){cout<<"Tu numero es uno";}
    else if(number==2){cout<<"Tu numero es dos";}
    else if(number==3){cout<<"Tu numero es tres";}
    
    
    system("pause");
    return 0; 
}
