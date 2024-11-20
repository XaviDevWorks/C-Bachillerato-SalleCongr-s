#include<iostream>
#include<time.h>
using namespace std;

int main(){
    int a,b,c,r[20];
    
    srand(time(NULL));//El time null necesita la libreria time.h
    //Para el srand y rand talvez se necesita la libreria stdlib.h
    
    while(a<b){
        cout<<"Introduce dos numeros\n";
        cin>>a;
        cin>>b;
        c=b-a;
    }
    
    for(int i=0;i<20;i++){
            r[i]=rand()%c+a;
            cout<<r[i]<<"\n";
            }
    
    system ("pause");
    return 0;
}
