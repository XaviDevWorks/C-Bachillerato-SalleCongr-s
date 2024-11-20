//Ejercicio 24


#include<iostream> 
using namespace std; 
int main(){
    float s,y,ns;
    
    cout<<"How many years have you been working?\n";
    cin>>y;
    cout<<"And what is yor salary?\n"; 
    cin>>s;
   
   if(y>=0&&y<=5)  {
    ns=s*1.03;
    cout<<"Your new salary is "<<ns<<"!! Congrats\n";               
   }
   else if (y>=5&&y<=10) {
   ns=s*1.05;
    cout<<"Your new salary is "<<ns<<"!! Congrats\n";               
   }
   else if (y>=10&&y<=25) {
   ns=s*1.07;
    cout<<"Your new salary is "<<ns<<"!! Congrats\n";               
   }
   else if (y>=25&&y<=50) {
   ns=s*1.10;
    cout<<"Your new salary is "<<ns<<"!! Congrats\n";               
   }
   else if (y>=50) {
   cout<<"Enjoy ypur retirement";
}
   else{
   
   }
   
    system("pause");
    return 0;            
}
