//Mi primerito condicional

/* 
if (condition) {action}
else {action}
else if (condicion) {action}
*/

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Welcome user\n";
    cout<<"Gimme a namba\n";
    cin>>n;
    
    if(n>100){
              cout<<"Your number is bigger than 100\n";
    }//IF (){}
    
    //If ( si el numero que le das es mas pequeño que 100...)
    
    
    else if(n==100){
              cout<<"Your number is 100\n"; 
    }
    /*Un igual son para operaciones matematicas, 
    el doble igual es como un tal numero es... (como si fuera el verbo ser)
    */
    else{
              cout<<"Your numer is lower than 100\n";
    }
      
    system("pause");
    return 0;
}
