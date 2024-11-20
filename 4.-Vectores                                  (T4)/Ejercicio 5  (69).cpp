//Exercice 69

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    int a[4][4],b[4][4],s[4][4];
    srand(time(NULL));
    
    cout<<"Hello user, welcome to our program\n";
    int x,y,z=0;
    while(z<1){
        cout<<"Gimme the minimum value\n";
        cin>>x;
        cout<<"Now the max!\n";
        cin>>y;
        z=y-x;
    }
    
    
    for(int i=0;i<4;i++){//filas
            for(int j=0;j<4;j++){//columnas
                a[i][j]=rand()%z+x;
                b[i][j]=rand()%z+x;
                s[i][j]=a[i][j]+b[i][j];
                cout<<a[i][j]<<"+"<<b[i][j]<<"="<<s[i][j]<<" ";        
            }
            cout<<"\n";
    }
    
    
    system("pause");
    return 0; 
}
