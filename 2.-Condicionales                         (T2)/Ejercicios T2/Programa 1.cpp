//By Xavi

/*
Programa 1

Este programa debe indicar si tres números introducidos por teclado
están o no ordenados, especificando, en caso de que lo estén, si estan 
ordenados de mayor a menor o de menor a mayor. 

EXTRA POINTS: El programa debe ordenar esos valores de menor a mayor.

*/

#include<iostream>
using namespace std;

int main (){
    
    int a,b,c,aux;
    
    cout<<"Hola, dame tres numeros.\n";
    cin>>a;
    cin>>b;
    cin>>c;
    
    if(a<b&&b<c){cout<<"Los numeros estan ordenados\nEstan ordenados de Menor a Mayor\n";}
    else if(a>b&&b>c){cout<<"Los numeros estan ordenados\nEstan ordenados de Mayor a Menor\n";}
    else{cout<<"Los numeros no estan ordenados\n";}
    
    //Ordenar
    aux=a;
    a=b;
    b=aux;
    if(a<c){aux=a;
            a=c;
            c=aux;}
    if(b<c){aux=b;
            b=c;
            c=aux;}
    
    cout<<"los datos ordenados son:\n";
    cout<<a<<""<<b<<""<<c;
    
    system("pause");
    return 0; 
}
