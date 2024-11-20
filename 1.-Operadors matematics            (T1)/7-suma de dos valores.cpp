#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	//Primera parte
	reinicio://Esto sirve para que se reinicie, se necesita los dos puntos
	int n1,n2, suma; //para poder hacer la suma
	cout<<"Vamos a hacer una suma!!\n";
		
	cout<<"Escriba el primer numero\n";
	cin>>n1;
	
	cout<<"\nEscriba el segundo numero\n";
	cin>>n2;
	
	
	//Parte de borrar pagina y añadirle un tiempo de espera
	
	Sleep(1000);
	system("cls");
	
	//Segunda parte
	
	suma=n1+n2;//La variable (suma) sin valor va delante del =(igual)
	//cout<<"El resultado a esta suma es:\n"<<suma;
	cout<<"El resultado de " <<n1<< "+"<<n2<<" es: " <<suma;
	
	cout<<"\n\n";
	
	//limpiamos pantalla antes de reiniciar
	//Para parar la pantalla podemos poner un Sleep o un system("pause")
	Sleep(1000);
	system("cls");
	goto reinicio;  
 
	system("pause");
	return 0;	
}
/*para que el programa vuelva ha iniciar el programa, que no se cierre, 
se reinicie, se necesita:
             goto reinicio;
             
(todo esto antes del final, donde se cierra el programa system("pause")
*/
