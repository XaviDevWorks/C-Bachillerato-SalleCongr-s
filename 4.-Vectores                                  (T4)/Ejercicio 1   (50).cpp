//Ejercicio 50

#include<iostream>
using namespace std;

int main(){
    int v[10];
    
    cout<<"Hello user\n";
    
    for(int i=0;i<10;i++){
            cout<<"Introduce the value in "<<i+1<<"\n";
            cin>>v[i];       
    }
    for(int i=0;i<10;i++){
            cout<<v[i]<<"\n";
            /*Si queremos que salga en horizontal tenemos 
            que crear un espacio, si queremos  que salga en vertical 
            ponemos un (\n)
            Vertical   "\n"
            Horizontal " "
            */
    }
    
    system("pause");
    return 0;
}
