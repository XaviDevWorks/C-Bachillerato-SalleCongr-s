//Exercice 22

#include<iostream>
using namespace std;

int main(){
    
    int n;
    
    cout<<"Hey you! Give me a number\n";
    cin>>n;
    
    if(n<50){cout<<"Error de programa\n";
             system("pause");
             return 0;
             }
    else{}
    
    //si es mas grande sigue programa entonces volvemos ha poner condiciones
    
    if(n%2==0&&n%5==0){cout<<"Es divisible per 2 i per 5\n";}
    else if(n%2==0&&n%5!=0){cout<<"Es divisible per 2 pero no per 5\n";}//!= es no igual a
    else if(n%2!=0&&n%5==0){cout<<"No es divisible per 2 pero si per 5\n";}
    else{cout<<"No es divisible per 2 ni per 5\n";}
    
    system("pause");
    return 0;
}
