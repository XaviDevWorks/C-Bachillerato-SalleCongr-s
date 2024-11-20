/*
Ejercicio 18
Transformar el horario [0 –24] h en el siguiente formato. 
Si el horario está fuera del rango hay que indicar que eso 
no es una hora.
Buenos días: (0 –13]h
Buenas tardes: (13–19]h
Buenas noches: (19–24]h
*/

#include<iostream>
#include<windows.h>
using namespace std;

int main (){
    
    reinicio:
    
    int hora;
    
    cout<<"Transformador de horario\n";
    
    cout<<"Diga la hora:\n";
    cin>>hora;
    
    //if(hora<=0||hora>24){cout<<"Esta hora no existe, ERROR";}
    if(hora>0&&hora<=13){cout<<"\n\nBuenos dias\n";}
    else if(hora>13&&hora<=19){cout<<"\n\nBuenas tardes\n";}
    else if(hora>19&&hora<=24){cout<<"\n\nBuenos dias\n";}
    else{cout<<"\n\nEsta hora no existe, ERROR\n";
         Sleep(1500);
         system("cls");
         goto reinicio;
    }
    
    system("pause");
    return 0; 
}
