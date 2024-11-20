//Exercise 53
//#include<time.h>
//#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){
    int v[10];
    
    cout<<"Hello user\n";
    
    for(int i=0;i<10;i++){
            cout<<"Gimme tyhe value in "<<i+1<<" position: ";
            cin>>v[i];       
    }
    
    cout<<"\nTe muestro los valores pares\n";
    for(int i=0;i<10;i++){
        if(v[i]%2==0){
                      cout<<v[i]<<" ";
        }     
    }
    cout<<"\n\nTe muestro los valores impares\n";
    for(int i=0;i<10;i++){
        if(v[i]%2!=0){//!= diferente de
                      cout<<v[i]<<" ";
        }     
    }
    cout<<"\n\n";
    
    system("pause");
    return 0;
}
