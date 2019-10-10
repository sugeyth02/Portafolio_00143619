#include <iostream>
using namespace std;
 int a[]={1,3,4,5,17,18,31,33};
int buscar();
int main (){
    int low=0,hight=7,i=0, x=0;
    cout<<"Digite el numero que desea buscar en el arreglo"<<endl;
    cin>>x;
    i= buscar(low,hight,x);
    if(i==-1)
    cout<<"el elemento no se encontro"<<endl;
    else
    cout<<"el elemento se encuentra  en la casilla"<<i<<endl;

}
int buscar(int low, int hight, int x){
    int mid;
    if(low>hight)
    return (-1);
    mid=(low+hight)/2;
   if (x==a[mid])
   return mid;
   if (x<a[mid]){
   hight=mid-1;
   return  buscar(low,hight,x);
    
   }
   else{
       low=mid+1;
    return  buscar(low, hight, x);
     
   }
}