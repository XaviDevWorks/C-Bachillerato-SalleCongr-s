#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    
    while(a>b){
    cout<<"Dame un numero\n";
    cin>>a;
    cout<<"Dame otro numero\n";
    cin>>b;
}
    cout<<"\n\n";
    
    for(int i=a;i<=b;i++){
        cout<<i<<"  ";
        }
        
        
        cout<<"\n\n";
        
    for(int i=b;i>=a;i--){
        cout<<i<<"  ";
        }
        
        
        cout<<"\n\n";
        
    system("pause");
    return 0;
}
