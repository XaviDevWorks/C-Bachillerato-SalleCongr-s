//By Xavi

/*
PROGRAMA 1:

Crear una tienda online de precios y artículos (podéis inventaros el nombre de la tienda, 
los artículos que se venden y el precio, pero mínimo 5 artículos). Mostrar por pantalla los 
diferentes productos a elegir con sus precios respectivos. El usuario deberá introducir por 
teclado el producto deseado y la cantidad de ese producto.

*/

#include<iostream>
#include<windows.h>
//#include<limits>
using namespace std;

int main (){
	reinicio:
	int n1,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0,c12=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0,a12=0;
	//int n1,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12;
	//reinicio:
    
    cout<<"\n";
    cout<<"_________________________\n";
    cout<<"|                       |\n";
    cout<<"|       GravityRC       |\n";
    cout<<"|                       |\n";
    cout<<"|_______________________|\n\n";
    cout<<"Bienvenidos a nuestra tienda\n\n";
    
	cout<<"Informacion:\n";
	cout<<"Somos un grupo creado por tres personas Xavi,Alex y Joaquin, pilotos de avion acrobatico catalanes.\n";
	cout<<"Esta es nuestra tienda online de aeromodelismo, donde vendemos todos nuestros productos usados en \n";
	cout<<"nuestros aviones y claro esta, en las comepticiones que hacemos alrededor de todo España y proximamente el mundo!\n\n";
	cout<<"Nuestras redes sociales son:\n";
	cout<<"IG: gravityrc_  || Facebook: GravityTeamRC  || YT: GravityRC\n\n\n";
	Sleep(1000);
	
	string io;
	while(io!="y"&&io!="n"){
		cout<<"Quiere ver el catalogo de productos?\n";
		cout<<"1.Si(y)      2.No(n)\n";
		cin>>io;
	}
	
	Sleep(500);
	system("cls");
	
	if(io=="y"){
	
	//Productos
	cout<<"Productos e informacion:\n";
	cout<<"                                            Aviones\n";
	cout<<"Cilindrada:      50cc                60cc                120cc                170cc \n";
	cout<<"Medidas:         2,1m                2,3m                3,19m                4,70m \n";
	cout<<"Peso:            8kg                 10kg                11kg                 12kg  \n";
	cout<<"N.de catalogo:    1                   2                   3                    4    \n";
	cout<<"Precio:          500€                900€                2400€                6100€ \n\n";
	
	cout<<"                                            Motores\n";
	cout<<"Cilindrada:      50cc                60cc                120cc                170cc \n";
	cout<<"Peso:            1,2kg               1,8kg               4,5kg                6,3kg \n";
	cout<<"N.de catalogo:    5                   6                   7                    8    \n";
	cout<<"Precio:          330€                700€                1600€                3000€ \n\n";
	
    cout<<"                                             Servos\n";
	cout<<"Fuerza:           10kg              20kg                40kg                 80kg   \n";
	cout<<"Peso:             80g               87g                 82g                  90g    \n";
	cout<<"N.de catalogo:     9                10                  11                   12     \n";
	cout<<"Precio:           20€               40€                 150€                 200€   \n\n";
	}
	
	else if(io=="n"){
		cout<<"Sin saber nuestros productos no podra comprar... ";
		Sleep(3000);
		system("cls");
		goto reinicio;
	}
	
	//Sleep(1000);
	string yn;
	//Seleccionar productos
	while(yn!="y"&&yn!="n"){
		cout<<"Quiere comprar algo?\n";
		cout<<"1.Si(y)      2.No(n)\n";
		cin>>yn;
	}
	
	while (yn=="y"){

		medio:
		
		cout<<"\n\nEscoja un producto\n";
		cout<<"1.-Avion 50cc\n";
		cout<<"2.-Avion 60cc\n";
		cout<<"3.-Avion 120cc\n";
		cout<<"4.-Avion 170cc\n";
		cout<<"5.-Motor 50cc\n";
		cout<<"6.-Motor 60cc\n";
		cout<<"7.-Motor 120cc\n";
		cout<<"8.-Motor 170cc\n";
		cout<<"9.-Servo 10kg\n";
		cout<<"10.-Servo 20kg\n";
		cout<<"11.-Servo 40kg\n";
		cout<<"12.-Servo 80kg\n";
	    cout<<"Ponga el numero de la lista:\n";
		cin>>n1;
	
		if (n1>12||n1<=0){
			cout<<"No existe este producto\n";
			goto medio;
		}
		else if(n1==1){
			cout<<"\nAvion 50cc\n";
			cout<<"Cuanta cantidad quiere?";
			while(!(cin>>c1)){
				cout<<"No es digito\n";
				cin.clear();
				cin.ignore(132,'\n');
				cout<<"Ponga el numero otra vez:\n";
			}
		    a1=500*c1;
		    cout<<"\n";
		}
		else if(n1==2){
			cout<<"\nAvion 60cc\n";
			cout<<"Cuanta cantidad quiere?";
			while(!(cin>>c2)){
				cout<<"No es digito\n";
				cin.clear();
				cin.ignore(132,'\n');
				cout<<"Ponga el numero otra vez:\n";
			}
			a2=900*c2;
			cout<<"\n";
		}
		else if(n1==3){
			cout<<"\nAvion 120cc\n";
			cout<<"Cuanta cantidad quiere?";
			while(!(cin>>c3)){
				cout<<"No es digito\n";
				cin.clear();
				cin.ignore(132,'\n');
				cout<<"Ponga el numero otra vez:\n";
			}
			a3=2400*c3;
			cout<<"\n";
		}
		else if(n1==4){
			cout<<"\nAvion 170cc\n";
			cout<<"Cuanta cantidad quiere?";
			while(!(cin>>c4)){
				cout<<"No es digito\n";
				cin.clear();
				cin.ignore(132,'\n');
				cout<<"Ponga el numero otra vez:\n";
			}
			a4=6100*c4;
			cout<<"\n";
		}	
		else if(n1==5){
			cout<<"\nMotor 50cc\n";
			cout<<"Cuanta cantidad quiere?";
			while(!(cin>>c5)){
				cout<<"No es digito\n";
				cin.clear();
				cin.ignore(132,'\n');
				cout<<"Ponga el numero otra vez:\n";
			}
			a5=330*c5;
			cout<<"\n";
		}
		else if(n1==6){
			cout<<"\nMotor 60cc\n";
			cout<<"Cuanta cantidad quiere?";
			while(!(cin>>c6)){
				cout<<"No es digito\n";
				cin.clear();
				cin.ignore(132,'\n');
				cout<<"Ponga el numero otra vez:\n";
			}
			a6=700*c6;
			cout<<"\n";
		}
		else if(n1==7){
			cout<<"\nMotor 120cc\n";
			cout<<"Cuanta cantidad quiere?";
			while(!(cin>>c7)){
				cout<<"No es digito\n";
				cin.clear();
				cin.ignore(132,'\n');
				cout<<"Ponga el numero otra vez:\n";
			}
			a7=1600*c7;
			cout<<"\n";
		}
		else if(n1==8){
			cout<<"\nMotor 170cc\n";
			cout<<"Cuanta cantidad quiere?";
			while(!(cin>>c8)){
				cout<<"No es digito\n";
				cin.clear();
				cin.ignore(132,'\n');
				cout<<"Ponga el numero otra vez:\n";
			}
			a8=3000*c8;
			cout<<"\n";
		}
		else if(n1==9){
			cout<<"\nServo 10kg\n";
			cout<<"Cuanta cantidad quiere?";
			while(!(cin>>c9)){
				cout<<"No es digito\n";
				cin.clear();
				cin.ignore(132,'\n');
				cout<<"Ponga el numero otra vez:\n";
			}
			a9=20*c9;
			cout<<"\n";
		}
		else if(n1==10){
			cout<<"\nServo 20kg\n";
			cout<<"Cuanta cantidad quiere?";
			while(!(cin>>c10)){
				cout<<"No es digito\n";
				cin.clear();
				cin.ignore(132,'\n');
				cout<<"Ponga el numero otra vez:\n";
			}
			a10=40*c10;
			cout<<"\n";
		}
		else if(n1==11){
			cout<<"\nServo 40kg\n";
			cout<<"Cuanta cantidad quiere?";
			while(!(cin>>c11)){
				cout<<"No es digito\n";
				cin.clear();
				cin.ignore(132,'\n');
				cout<<"Ponga el numero otra vez:\n";
			}
			a11=150*c11;
			cout<<"\n";
		}
		else if(n1==12){
			cout<<"\nServo 80kg\n";
			cout<<"Cuanta cantidad quiere?";
			while(!(cin>>c12)){
				cout<<"No es digito\n";
				cin.clear();
				cin.ignore(132,'\n');
				cout<<"Ponga el numero otra vez:\n";
			}
			a12=200*c12;
			cout<<"\n";
		}
		
		int suma;
		char wr;
		cout<<"Quiere seguir comprando?\n";
		cout<<"1.Si(y)      2.No(n)\n";
		cin>>wr;
		
		if(wr=='n'){
			suma=a1+a2+a3+a4+a5+a6+a7+a8+a9+a10+a11+a12;
			system("cls");
			cout<<"El precio final de tu carro es:"<<suma<<"€\n\n\n";
			Sleep(5000);
			system ("cls");
			//goto reinicio;
				
			string hc;
			
			while(hc!="c"&&hc!="r"){
				cout<<"Quiere cerrar el programa o reiniciarlo?\n";
				cout<<"1.Cerrar (c)      2.Reiniciar (r)\n";
				cin>>hc;
			}
			
			if(hc=="c"){
				
				cout<<"Esperamos que vuelva pronto!";
				system ("cls");
				
				cout<<"Cerrando pagina web.";
				Sleep(500);
				system ("cls");
				
				cout<<"Cerrando pagina web..";
				Sleep(500);
				system ("cls");
				
				cout<<"Cerrando pagina web...\n\n";
				Sleep(500);
				system ("pause");
				return 0;	
			}
			
			else if(hc=="r"){
				system ("cls");
				
				cout<<"Reiniciando pagina web.";
				Sleep(500);
				system ("cls");
				
				cout<<"Reiniciando pagina web..";
				Sleep(500);
				system ("cls");
				
				cout<<"Reiniciando pagina web...";
				Sleep(500);
				system ("cls");
				
				goto reinicio;
			}
		}
	}

	if(yn=="n"){
		cout<<"\n\nEsperamos que vuelva pronto!\n\n";
		Sleep(4000);
		system("cls");
	}


    /*system("pause");
    return 0; */
}

//By Xavi
