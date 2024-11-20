//Ejercicio 12

#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    
    int mm,cm,m,km,m2;
    
    cout<<"Calculadora: conversor\n";
    
    cout<<"Dame la medida en metros para poderlo convertir\n";
    cin>>m;
    
    //Calculando simple estetica
    Sleep(500);
    system("cls");
    cout<<"Calculando.";
    Sleep(300);
    system("cls");
    
    cout<<"Calculando..";
    Sleep(300);
    system("cls");
    
    cout<<"Calculando...";
    Sleep(600);
    system("cls");
    
    mm=m*1000;
    cm=m*100;
    km=m/1000;
    //m2=m-km*1000;//Es para saber los metros restantes de los km
    m2=m%1000;
    
    cout<<"Tus metros...\n";
    cout<<"Equivalen a: "<<mm<<"mm\n";
    cout<<"Equivalen a: "<<cm<<"cm\n";
    cout<<"Equivalen a: "<<m<<"m\n";
    cout<<"Equivalen a: "<<km<<"km + "<<m2<<" m\n\n";
    
    system("pause");
    return 0;
}
