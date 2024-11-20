//Mi primerito Vector

#include<iostream>
using namespace std;

int main(){
    int v[5]={1,2,3,4,5};
    int w[5];
    /*hay tres maneras
    el usuario manualmente 
    introduce los datos, el otro de forma aleatoria y definidos.*/
    cout<<"Hello user, u ready to get vectorized?\n";
    cout<<"Let's go!\n";
     
    for(int i=0;i<5;i++){//Empieza en 0 asi que si que el numero 0 lo cuento y va hasta el 4 en este caso
            cout<<"introduce the value in "<<i+1<<" position\n";
            cin>>w[i];
    }
    
    int z[5];
    cout<<"\n\n";
    
    for(int i=0;i<5;i++){
            z[i]=v[i]+w[i];
            cout<<v[i]<<" + "<<w[i]<<" = "<<z[i]<<"\n";
    }
    
    system("pause");
    return 0;
}
