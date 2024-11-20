#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    srand(time(NULL));
    
    int x,y,z=0;
    while(z<1){
    cout<<"Introduce el valor minimo\n";
    cin>>x;
    cout<<"Introduce el valor maximo\n";
    cin>>y;
    z=y-x;
}
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
            a[i][j]=rand()%z+x; 
               }
            }
    cout<<"La diagonal es "<<a[0][0]<<", "<<a[1][1]<<" i "<<a[2][2]<<".\n";
    system("pause");
    return 0;
    }
