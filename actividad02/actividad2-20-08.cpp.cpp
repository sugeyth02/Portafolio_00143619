#include <iostream>
using namespace std;
/*Funcion para los arreglos pares */
float medianapar(int *puntero, int longitud){ /*Recibira el array en forma de puntero */
	float mediana;
	int suma,datos;
	datos= longitud/2;
	suma= *(puntero+datos-1) + *(puntero+datos);/* se utiliza datos-1 ya que la posicion del arreglo se inicia desde la 0 */
	mediana= (float) suma/2;
	return mediana;
}
/*Funcion para los arreglos impares */
float medianaimpar(int *puntero, int longitud){/*Recibira el array en forma de puntero */
	float mediana;	
	int numero;
	numero= longitud/2; /*Se declaro como int para solo obtener la parte entera de la division y asi luego sumarle 1 para obtener la posicion de la mediana*/
	mediana= *(puntero+numero);/*Aqui obtenemos la posicion de la mediana*/
	return mediana;
}
int main (){
	float mediana=0;
	int n = 0;
    cout << " Ingrese la longitud del arreglo: ";
    cin >> n;
    int array[n];
        for(int i=0; i<n; i++){
            cout << "Ingrese valor[" << i << "] del arreglo descendientemente: ";
            cin >> array[i];
        }
if (n%2==0){/* Verificamos si el arreglo es par o impar */
mediana= medianapar(array, n);
}
else 
  mediana= medianaimpar(array, n);
  cout<<"El valor de la mediana es: "<<mediana<<endl;
	return 0;
}
