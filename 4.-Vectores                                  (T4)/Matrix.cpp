//Matrix

/*
m[fila][columna]
*/
#include<iostream>
using namespace std;

int main(){
    int m[3][4]={1,2,3,4,		//m[fila][columna]
                 5,6,7,8,
                 9,10,11,12};
                 
    for(int i=0;i<3;i++){           //Bucle filas
        for(int j=0;j<4;j++){   //Bucle columnas
            cout<<m[i][j]<<"  ";     
        }                     
        cout<<"\n";     
    }
    
    system("pause");
    return 0;
}
