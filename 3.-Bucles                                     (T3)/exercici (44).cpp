//Exercici 44

#include<iostream>
#include<windows.h>
using namespace std;

int main() {
	int min=0,max=0,skip;
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
			system("cls");
		}
	}
	skip=min-1;
	while (skip < min || skip > max) {
		cout<<"Ahora dame un valor entre el "<<min<<" y el "<<max<<"\n";
		cin>>skip;
		if (skip < min || skip > max) {
			cout<<"A ver tonto del culo\n";
			Sleep(1500);
			cout<<"El valor tiene que estar entre el "<<min<<" y el "<<max<<"\n";
			Sleep(2500);
			cout<<"Si no esto no funciona, entiendes?\n";
			Sleep(3000);
			cout<<"Vamos a volver a intentarlo\n";
			Sleep(1500);
			system("pause");
		}
		system("cls");
	}
	cout<<"Intervalo:";
	for (int i = min; i <= max; i++) {
		if (i == skip) {cout<<" _";}
		else {cout<<" "<<i;}
	}
	Sleep(750);
	cout<<"\nPrograma finalizado\n";
	Sleep(1500);
	system("pause");
	return 0;
}
