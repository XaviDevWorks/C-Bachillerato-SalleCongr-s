//Ejercicio 6
#include<iostream> //esto sirve para entradas i salidas
#include<windows.h> // libreria del sleep
using namespace std;

int main(){
    int v1;
    int v2;
    int v3;
    //Tambien puede ser int v1,v2,v3;
    
    cout<<"Para poder iniciar sesión necesito tres valores, cuales son? !!\n";
    
    cout<<"Primer valor\n";
    cin>>v1;
    cout<<"\n";
    
    cout<<"Segundo valor\n";
    cin>>v2;
    cout<<"\n";
    
    cout<<"Tercer valor\n";
    cin>>v3;
    cout<<"\n";
    
    Sleep(1000);//se necesita el #include<windows.h>
    system ("cls"); // cls limpiar pagina (clear screen)//
    
    cout<<"Tus valores son...\n"<<v1<<"\n";
    cout<<v2<<"\n";
    cout<<v3<<"\n\n";
    
    system("pause");
    return 0;
}

/*
Los cout van siempre la flecha en la misma dirección <<
<<v1<<
*/

