/*Definiendo variables

int:     nº enter
float:   nº decimal
char:    lletra
string:  cadena de lletres
*/

#include<iostream> //esto sirve para entradas i salidas
#include<windows.h> // libreria del sleep
using namespace std;

int main(){
    string nombre;
    int edad;
    cout<<"Holaa !!\n";
    cout<<"Como te llamas?\n";
    cin>>nombre;
    cout<<"\nQue edad tienes?\n";
    cin>>edad;
    cout<<"\n";
    
    //system("pause"); // pausa en la pantalla (Pausa)//
    Sleep(1000);
    system ("cls"); // cls limpiar pagina (clear screen)//
    
    cout<<"Ahh..tu nombre es "<<nombre<<"\n";
    cout<<"Y tu edad es "<<edad<<"\n\n";
    
    system("pause");
    return 0;
}
/*
Poner las variables al principio mejor
cout las flechas:         <<
cin las flechas al reves: >>

Si queremos saltos de linea tendremos que cerrar la variable 
y poner saltos de linea (<<name<<"\n\n")

system("pause"); (para hasta que tu le des un intro)
Sleep(1000); en milisegundos (1000=1 segundo)ç
Sleep en ayuscula.

#include<windows.h> (Es la libreria que usa el Sleep)
*/
