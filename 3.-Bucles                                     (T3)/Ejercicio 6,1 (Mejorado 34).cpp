#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    
    reinicio:

    cout<<"Dame un numero\n";
    cin>>a;
    cout<<"Dame otro numero\n";
    cin>>b;

    cout<<"\n\n";
    
    //
   if(a<b){}
   else if(a>b){
        int c;
        c=a;
        a=b;
        b=c;
        }
   else {cout<<"WTF?\n";
         goto reinicio; 
         }  
    //  
     
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
