//Ejercicio 51

#include<iostream>
//#include<stlib.h>
//#include<time.h>
using namespace std;

//Para numeros aleatorios debemos usar el srand y rand

int main(){
    int v[10];
    
    srand(time(NULL));
    
    cout<<"Hello user\n";
    
    for(int i=0;i<10;i++){
            v[i]=rand()%100+1;//creo valores aleatorios     
            cout<<v[i]<<"\n"; 
    }
    //Si no pido valores sobra poner otro bucle porque no hace falta.
    
    system("pause");
    return 0;
}
