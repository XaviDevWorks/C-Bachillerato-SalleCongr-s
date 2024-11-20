#include<iostream>
using namespace std;

int main (){
   int n=0;
   
   while(n<50){
               cout<<"Dame un numero";
               cin>>n;
               }
               
               for(int i=1;i<=n;i++){
               if(i%3==0&i%5==0){cout<<i<<"  ";}    
               
               }
  
   system ("pause");
   return 0;  
}
