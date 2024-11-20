//Exercici 43

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
using namespace std;

int main() {
	int min,max,range=0,guess,answer,gcount=5;
	while (range < 5) {
		srand(time(NULL));
		cout<<"Vamos a jugar a un juego\n";
		Sleep(1500);
		cout<<"Dame dos numeros, un valor minimo y un maximo\n";
		cin>>min;
		cin>>max;
		range=max-min+1;
		if (range < 5) {
			cout<<"Oye! Asi no podemos jugar >:(\n";
			Sleep(1750);
			cout<<"Vamos a intentarlo otra vez\n";
			Sleep(1750);
			system("pause");
		}
		system("cls");
	}
	answer=rand()%range+min;
	cout<<"Estoy pensando un numero del "<<min<<" al "<<max<<"\n";
	Sleep(2000);
	cout<<"Tienes "<<gcount<<" intentos para adivinarlo ;)\n";
	for (; gcount > 0; gcount--) {
		cin>>guess;
		if (guess > answer) {cout<<"No. Mi numero es menor\n";}
		else if (guess < answer) {cout<<"No. Mi numero es mayor\n";}
		else {break;}
	}
	if (guess == answer) {
		cout<<"Enhorabuena! Has acertado mi numero! :D\n";
		Sleep(1750);
		cout<<"Te han sobrado "<<gcount<<" intentos\n";
	}
	else {
		cout<<"Vaya, no has acertado mi numero :(\n";
		Sleep(1750);
		cout<<"Mi numero era el "<<answer<<"\n";
	}
	Sleep(2000);
	system("pause");
	return 0;
}
