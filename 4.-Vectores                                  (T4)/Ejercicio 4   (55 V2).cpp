//Exercici 55 V2

#include<iostream>
//#include<stdlib.h>
//#include<time.h>
using namespace std;

int main (){
    srand(time(NULL));

    int a;
    int x=0;
    
    while(x<1){
        cout<<"Hello user, cuantas posiciones quieres\n";
        cin>>x;
    }
    
    int v[x];
    
    while(a<1||a>2){
        cout<<"Escoge tu vector\n";
        cout<<"1. Aleatorio\n";
        cout<<"2. Manual\n";
        cin>>a;
    }
    if(a==1){
             int max,min,in;
             cout<<"Introcude el valor maximo\n"; 
             cin>>max;
             cout<<"Introduce el valor mínimo\n";
             cin>>min;
             in=max-min;
             
             for(int i=0;i<x;i++){
                     v[i]=rand()%in+min;
             }          
    }
    else if(a==2){
         for(int i=0;i<x;i++){
                 cout<<"Introduce el valor "<<i+1<<"\n";
                 cin>>v[i];
         }                                    
    }
    system("cls");
    
    int s=0;
    for(int i=0;i<x;i++){
            cout<<v[i]<<"\n";
            s=s+v[i];
            
            cout<<"La suma de tu vector es: "<<s<<"\n";
    }
    
    system("pause");
    return 0;
}
