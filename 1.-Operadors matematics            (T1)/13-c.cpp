//Ejercicio 13

#include<iostream>
#include<windows.h>
using namespace std;

int main() {
	int personas,pizzas,trozos,porciones,lt,lp;
	cout<<"Telepizza\n";
	cout<<"Cuantas pizzas querran?\n";
	cin>>pizzas;
	cout<<"\nCuantas personas van a comer?\n";
	cin>>personas;
	cout<<"\nPor ultimo cuantas porciones por pizza querran?\n";
	cin>>porciones;
	
	trozos=pizzas*porciones;
	system("cls");
	lt=trozos%personas;
	lp=lt/porciones;
	lt=lt%porciones;
	Sleep(500);
	system("cls");
	cout<<"Seran "<<trozos<<" porciones en total\nY seran "<<pizzas/personas<<" pizzas y "<<trozos-(pizzas*porciones)<<" porciones por persona\n";
	cout<<"Sobraran "<<lp<<" pizzas y "<<lt<<" porciones\n\n";
	system("pause");
	return 0;
}
