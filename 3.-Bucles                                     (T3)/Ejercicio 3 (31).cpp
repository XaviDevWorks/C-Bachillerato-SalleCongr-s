//ejercicio 31

#include<iostream>
using namespace std;

int main (){
    int a,b;
    
    reinicio:
    
    cout<<"Hey! Gimme two numbers\n";
    cin>>a;
    cout<<"Now the seconds one!\n";
    cin>>b;
    
    if(a<b){for(int i=a;i<=b;i++/*i++ es igual a i+1*/){
            cout<<i<<"  ";
            
            }}
    else if(a==b){cout<<"Es lo mismo...";
    goto reinicio;}
    else{
          for(int i=a;i>=b;i--/*i++ es igual a i+1*/){
            cout<<i<<"  ";
            
            }}
    cout<<"\n\n";
    
    system("pause");
    return 0; 
}
