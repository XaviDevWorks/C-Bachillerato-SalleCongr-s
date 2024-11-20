//Ejercicio 26

#include<iostream>
#include<windows.h>
using namespace std;

int main (){
    
    int g,mg,kg,t,g2,n;
    
    reinicio:
    
    cout<<"Hello!Wlcome to the unit conversor!\n";
    cout<<"How many grams do you have?\n";
    cin>>g;
    
    cout<<"Select your units\n";
    cout<<"1.-Tones\n2.-Kilograms\n3.-Miligrams\n";
    cin>>n;
    
    Sleep(1000);
    system("cls");
    
    if (n==1){
         t=g/1000000;
         kg=g/1000%1000;//Ejemplo si tengo 1235005g me quedaria con 1235 si divido entre 1000 y despues el porcentaje para quedarme con los 3 primeros numeros
         g2=g%1000;
         cout<<"Here you have "<<t<<"T + "<<kg<<"kg + "<<g2<<"g\n";
         }
    else if (n==2){
         kg=g/1000;
         g2=g%1000;
         cout<<"Here you have "<<kg<<"kg + "<<g2<<"g\n";
         }
    else if (n==3){
         mg=g*1000;
         cout<<"Here you have "<<mg<<"mg\n";
         }
    else{
         cout<<"Error\n";
         cout<<"Please introduce a valid number\n";
         Sleep(2000);
         system("cls");
         goto reinicio;
         }
        
         
    char1:    
    char yn;//Es una variable tipo caracter     
    cout<<"Do you want to convert other grams?\n";
    cout<<"Y\n\n";
    cin>>yn;
    
    if(yn=='y'){
         cout<<"Ok. Lt's go!\n";
         Sleep(1000);
         system("cls");
         goto reinicio;
                }
    else if(yn=='n'){
         cout<<"Ok. See you\n";
         Sleep(2000);
         return 0;
         }
    else{goto char1;}
       
    system("pause");
    return 0; 
}
