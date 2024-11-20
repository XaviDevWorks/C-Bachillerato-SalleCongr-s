//Exercici 55

#include<iostream>
//#include<stdlib.h>
//#include<time.h>
using namespace std;

int main (){
    srand(time(NULL));
    int v[10];
    int a;
    
    while(a<1||a>2){
        cout<<"Hello user, escoge tu vector\n";
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
             
             for(int i=0;i<10;i++){
                     v[i]=rand()%in+min;
             }          
    }
    else if(a==2){
         for(int i=0;i<10;i++){
                 cout<<"Introduce el valor "<<i+1<<"\n";
                 cin>>v[i];
         }                                    
    }
    system("cls");
    
    int s=0;
    for(int i=0;i<10;i++){
            cout<<v[i]<<"\n";
            s=s+v[i];
            
            cout<<"La suma de tu vector es: "<<s<<"\n";
    }
    
    system("pause");
    return 0;
}
