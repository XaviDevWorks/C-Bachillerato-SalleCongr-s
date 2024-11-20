//Exercici 41

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
using namespace std;

int main() {
	int min=0,max=0,range,random[2];
	srand(time(NULL));
	while (min >= max) {
		cout<<"Dame el valor minimo\n";
		cin>>min;
		cout<<"Ahora dame el valor maximo\n";
		cin>>max;
		if (min >= max) {
			cout<<"A ver tonto del culo\n";
			Sleep(1500);
			cout<<"El valor minimo tiene que ser menor que el maximo\n";
			Sleep(2500);
			cout<<"Si no esto no funciona, entiendes?\n";
			Sleep(3000);
			cout<<"Vamos a volver a intentarlo\n";
			Sleep(1500);
			system("pause");
		}
		system("cls");
	}
	range=max-min+1;
	cout<<"Generando valores aleatorios...\n";
	random[0]=rand()%range+min; // La tarea pide que los numeros aleatorios no se generen con bucles
	random[1]=rand()%range+min;
	Sleep(3000);
	cout<<"Valores aleatorios: "<<random[0]<<", "<<random[1]<<"\n";
	system("pause");
	return 0;
}
