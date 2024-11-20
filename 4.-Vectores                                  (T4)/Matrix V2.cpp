#include<iostream>
using namespace std;

int main(){
    int m[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"introduce el valor en fila "<<i<<" columna "<<j<<"\n";
            cin>>m[i][j];
        }
    }
    
    system("cls");
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<m[i][j];
        }
        cout<<"\n";
    }
    system("pause");
    return 0;
}
