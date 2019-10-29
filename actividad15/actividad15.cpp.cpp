//GRUPO DE PROYECTO, 00100619,00025719,00159619,00143619.
#include <iostream>

using namespace std;

struct nodo {
	int info;
	struct nodo *izq;
	struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol crearArbol(int x) {
	Arbol p = new Nodo;
	p->info = x;
	p->izq = NULL;
	p->der = NULL;
	return p;
}

void asignarIzq(Arbol a, int unDato) {
	if (a == NULL)
		cout << "Error: arbol vacio" << endl;
	else if (a->izq != NULL)
		cout << "Error: subarbol IZQ ya existe" << endl;
	else
		a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato) {
	if (a == NULL)
		cout << "Error: arbol vacio" << endl;
	else if (a->der != NULL)
		cout << "Error: subarbol DER ya existe" << endl;
	else
		a->der = crearArbol(unDato);
}

void recorrerPersonalizado(Arbol p) {
	bool continuar = true;
	do {
		int opcion = 0;
		cout << "\nSe encuentra en el nodo " << p->info << endl;
		cout << "\t1)Agregar nodo izquierda\n\t2)Agregar nodo derecha\n";
		cout << "\t3)Ir sub-arbol izquierdo\n\t4)Ir sub-arbol derecho\n";
		cout << "\t5)Regresar al nodo padre\n\tOpcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			if (p->izq == NULL) {
				int numero = 0;
				cout << "Numero a agregar: ";
				cin >> numero;
				asignarIzq(p, numero);
				cout << "Numero agregado exitosamente" << endl;
			}
			else
				cout << "Error: ya existe sub-arbol izquierdo" << endl;
			break;
		case 2:
			if (p->der == NULL) {
				int numero = 0;
				cout << "Numero a agregar: ";
				cin >> numero;
				asignarDer(p, numero);
				cout << "Numero agregado exitosamente" << endl;
			}
			else
				cout << "Error: ya existe sub-arbol derecho" << endl;
			break;
		case 3:
			if (p->izq != NULL)
				recorrerPersonalizado(p->izq);
			else
				cout << "Error: NO existe sub-arbol izquierdo" << endl;
			break;
		case 4:
			if (p->der != NULL)
				recorrerPersonalizado(p->der);
			else
				cout << "Error: NO existe sub-arbol derecho" << endl;
			break;
		case 5:
			continuar = false;
			break;			
		default:
			cout << "Error: Opcion no valida" << endl;
			break;
		}
	} while (continuar);
}

void preorden(Arbol a) {
	if (a != NULL) {
		cout << " " << a->info;
		preorden(a->izq);
		preorden(a->der);
	}
}
void inorden(Arbol a) {
	if (a != NULL) {
		inorden(a->izq);
		cout << " " << a->info;
		inorden(a->der);
	}
}
void postorden(Arbol a) {
	if (a != NULL) {
		postorden(a->izq);
		postorden(a->der);
		cout << " " << a->info;
	}
}

void recorrerArbol(Arbol a) {
	cout << "Recorrido PRE orden:"; preorden(a); cout << endl;
	cout << "Recorrido IN orden:"; inorden(a); cout << endl;
	cout << "Recorrido POST orden:"; postorden(a); cout << endl;
}

int AlturadeArbol(Arbol p) {
	int contador1 = 0, contador2 = 0;

	if (p->izq != NULL) {
		contador1 = AlturadeArbol(p->izq);
		contador1++;
	}
	if (p->der != NULL){
		contador2 = AlturadeArbol(p->der);
		contador2++;
	}
	if (contador1 > contador2)
		return contador1;
	else
		return contador2;
}

int main() {
	int variable = 0;
	cout << "Inicializando arbol...\nValor contenido en la raiz: ";
	cin >> variable;

	Arbol arbol = crearArbol(variable);

	bool continuar = true;
	do {
		int opcion = 0;
		cout << "Menu:\n\t1) Mostrar recorridos";
		cout << "\n\t2) Recorrer personalizado";
		cout << "\n\t3) Altura del arbol";
		cout << "\n\t4) Salir\n\tOpcion elegida: ";

		cin >> opcion;
		switch (opcion) {
		case 1: recorrerArbol(arbol);
			break;
		case 2: recorrerPersonalizado(arbol);
			break;
		case 4: continuar = false;
			break;
		case 3:
			cout << "La Alura del Arbol es: " << AlturadeArbol(arbol) << endl;
			break;
		default: cout << "Opcion erronea!" << endl;
			break;
		}
	} while (continuar);

	return 0;
}