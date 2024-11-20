#include<iostream>
#include<windows.h>
using namespace std;

int main (){
	float B,A, area;
	cout<<"Vamos a calcular el area de un triangulo!!\n";
	
	cout<<"Escriba la medida de la Base\n";
	cin>>B;
	
	cout<<"\nEscriba la medida de la Altura\n";
	cin>>A;
	
	Sleep(1000);
	system("cls");
	
	area=B*A/2;
	cout<<"El area de tu triangulo es:\n"<<area;
	
	cout<<"\n\n";
	
	system("pause");
	return(0);	
}
