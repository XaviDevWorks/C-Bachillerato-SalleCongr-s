/*Operadors matematics
suma +
resta -
Multiplicació *
Potencia pow (,)
Arrel sqrt()
*/

#include<iostream>
#include<windows.h>
using namespace std;

int main(){
     
     int a,b,c,d;
     
     cout<<"Vamos ha hacer una division\n\n";
     
     cout<<"Escriba el numero que quiere dividir\n";
     cin>>a;
     
     cout<<"\n\nEscriba el numero por el que quiera dividir\n";
     cin>>b;
     
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
     
     c=a%b;//Sirve para poder conseguir el residuo de esta división
     d=a/b;
     cout<<"la division de "<<a<<" ente "<<b<<" es: "<<d;
     cout<<"\nY el residuo es: "<<c;
     cout<<"\n\n";
     
     
     system("pause");
     return 0; 
}
//El porcentaje % nos da el residuo de la división
