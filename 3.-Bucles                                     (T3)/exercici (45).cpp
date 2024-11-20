//Exercici 45

#include<iostream>
using namespace std;

int main() {
	int min,max,step,div;
	cout<<"Dame un valor minimo y un maximo\n";
	cin>>min;
	cin>>max;
	if (min >= max)  {
		cout<<"ERROR\n";
	}
	else {
		cout<<"Ahora dame cada cuantos numeros compruebo\n";
		cin>>step;
		cout<<"Y finalmente el divisor que quieras\n";
		cin>>div;
		cout<<"Intervalo:";
		for (int i = min; i <= max; i += step) {
			if (i % div == 0) {
				cout<<" "<<i;
			}
		}
		cout<<"\n";
	}
	system("pause");
	return 0;
}
