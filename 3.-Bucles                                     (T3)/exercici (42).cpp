//By Xavi
//Exercici 42

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
using namespace std;

int main() {
	int min=0,max=0,range,random[20];
	srand(time(NULL));
	while (min >= max) {
		cout<<"Dame el valor minimo\n";
		cin>>min;
		cout<<"Ahora dame el valor maximo\n";
		cin>>max;
		if (min > max) {
			cout<<"Asi no\n";
			Sleep(1500);
			cout<<"El valor minimo tiene que ser menor que el maximo\n";
			Sleep(2500);
			cout<<"Si no, no funcionara\n";
			Sleep(3000);
			cout<<"Vamos a volver a intentarlo\n";
			Sleep(1500);
			system("pause");
		}
		system("cls");
	}
	range=max-min+1;
	cout<<"valores aleatorios\n";
	for (int i = 0; i < 20; i++) {
		random[i] = rand()%range+min;
	}
	Sleep(3000);
	cout<<"Valores aleatorios: ";
	for (int j = 0; j < 20; j++) {
		cout<<random[j]<<", ";
	}
	cout<<"\n";
	system("pause");
	return 0;
}
//By Xavi
	
