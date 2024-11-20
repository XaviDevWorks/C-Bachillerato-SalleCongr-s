//Ejercicio 15

#include<iostream>
#include<windows.h>
using namespace std;

int main (){
    
    int d,h,m,s,s2;
    
    cout<<"Acabas de abrir el reloj 3000";
    
    cout<<"\n\nDame los segundos\n";
    cin>>s;
    
    Sleep(200);
    system("cls");
    
    d=s/86400;
    h=s/3600%24;
    m=s/60%60;
    s2=s%60;
    
    cout<<"Son "<<d<<"dias "<<h<<"horas "<<m<<"minutos "<<s2<<"segundos\n\n";
    
    system("pause");
    return 0;
}
