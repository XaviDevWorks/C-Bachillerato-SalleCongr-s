#include<iostream>
using namespace std;

int main (){
    int n;
    
    reinicio:
    cout<<"Hi!!";
    cout<<"dime un numero\n";
    cin>>n;
    
    if(n>10&&n%2==0){cout<<"\ntu numero es mayor o igual a 10 y divisible entre 2\n\n";}
    else{cout<<"Error\n";}
    
    system("pause");
    return 0; 
}
