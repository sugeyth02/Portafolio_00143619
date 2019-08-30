#include <iostream>
using namespace std;

int multiplicacion(int a, int b){
	if(b==1){
		
		return a;
	}else{
		int x =multiplicacion(a, (b-1));
		int y = a;
		
		return x + y;
	}
}


int main()
{
	cout << "mutltiplicacion de de 4*9\n";
	int r = multiplicacion(4,9);
	cout << "Resultado: " << r << endl;
	return 0;
	
}