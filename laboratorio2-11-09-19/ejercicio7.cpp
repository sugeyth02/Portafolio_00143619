#include <iostream>
using namespace std;
int recursion (int a, int b){
if (a==b){
cout<<"listo"<<endl;
}

if (a>b){
    cout<<(b++)<<endl;
    recursion(a,b);
}
if(a<b){
    cout<<(a++)<<endl;
    recursion(a,b);
}
}
int main(){
    int a=0; int b=0;

    cout<<"Ingrese un valor entero"<<endl;
    cin>>a;
     cout<<"Ingrese un valor entero"<<endl;
    cin>>b;
   recursion(a,b);
    return 0;
}