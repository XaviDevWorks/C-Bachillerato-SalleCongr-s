//Bucles con for
//Ejemplo 2

#include<iostream>
#include<windows.h>
using namespace std;

int main (){
    int c;
    string f;
    
    cout<<"Hello user, introduce a sentece\n";
    cin>>f;
    cout<<"How manu times do you want to repeat?";
    cin>>c;
    
    for(int i=0;i<c;i=i+1){
            cout<<f<<"\n";
            Sleep(500);
            }

    system("pause");
    return 0; 
}
