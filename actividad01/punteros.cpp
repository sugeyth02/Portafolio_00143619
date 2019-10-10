#include<iostream>
using namespace std;
void calculos (int num,int *doble, int *triple){
	*doble=num*2;
	*triple= num*3;
	cout<<"La direccion de memoria de numero es: "<<&num<<endl;
	cout<<"La direccion de memoria de doble es: "<<doble<<endl;
	cout<<"La direccion de memoria de triple es: "<<triple<<endl;
	cout<<"el valor del puntero doble es: "<<(*doble)<<endl;
	cout<<"El valor del puntero triple es: "<<(*triple)<<endl;
	
}
int main(){
	int numero=6, doble=0, triple=0, cuado=0;
	calculos(numero,&doble,&triple);
	cout<<"el doble de 6 es: "<<doble<<endl;
	cout<<"el triple de 6 es: "<<triple<<endl;
	cout<<"La direccion de memoria de numero es: "<<&numero<<endl;
	cout<<"La direccion de memoria de doble es: "<<&doble<<endl;
	cout<<"La direccion de memoria de triple es: "<<&triple<<endl;
	
	
	return 0;
}
