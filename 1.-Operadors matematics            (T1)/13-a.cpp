#include<iostream>
#include<windows.h>

using namespace std;

int main(){

int pz,p,pt,ppp,poso,por;
cout<<"Dame una cantidad de pizzas\n";
cin>>pz;

cout<<"Dame una cantidad de personas\n";
cin>>p;

pt=pz*por;
ppp=pt/p;
poso=pt%ppp;
por=8;
Sleep(2000);
system("cls");

cout<<"Porciones totales = "<<pt<<"\n";
cout<<"Porciones por persona = "<<ppp<<"\n";
cout<<"Sobran "<<poso<<"\n";
 
system("pause");

}
