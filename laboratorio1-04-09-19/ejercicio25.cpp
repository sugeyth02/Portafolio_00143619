#include<iostream>
#include<math.h>
using namespace std;
float Valorabsoluto(int a, int b){
float valorab=0;
return valorab=sqrt((pow(a,2))+(pow(b,2)));
}
int main (){
    float a=0, b=0, valorabsoluto=0;
    cout<<"ingrese el valor de un numero complejo"<<endl;
    cout<<"Ingresa a:"<<endl; cin>>a; 
    cout<<"Ingresa bj:"<<endl; cin>>b; 
    valorabsoluto=Valorabsoluto(a,b);
     cout<<"El numero es: | "<<a<<"+ j"<<b<<"|"<<endl;
    cout<<"El valor absoluto del numero complejo es: "<<valorabsoluto<<endl;
    return 0;

}