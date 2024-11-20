//Disco security guy

#include<iostream>
using namespace std;

int main (){
    int age;
    cout<<"Hey! Where r u going'?\n";
    cout<<"Your ID, c'mon! How old r u?\n";
    cin>>age;
    
    if(age>0&&age<14){
               cout<<"Go home kiddo!\n";
               }
               
    else if(age>=14&&age<16){
               cout<<"Go to Jamaica Disco!\n";
               }
    //&& (representa al y)

    else if(age>=16&&age<18){
               cout<<"OK. Come in. Enjoy your juice\n";
               }
    //(age>=16) n igual o mayor a 16)
    
    else if(age>=18&&age<21){
               cout<<"Come in, come in, enjoy the pary\n";
               }
               
    else if(age>=21&&age<100){
         cout<<"Excuse me sir. Get high yourself\n";
    }
    else if(age<=0||age>=100){
         cout<<"WTF?\n";
    }
    //(age>=18&&age<21) age mayor o igual a 18 y age mas pequeño a 21
    /*else{
         cout<<"Excuse me sir. Get high yourself\n";
    }
    */
    system("pause");
    return 0; 
}
