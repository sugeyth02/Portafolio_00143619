#include <iostream>
#include <vector>
using namespace std;

struct Orden{
    int revueltas;
    int frijolconqueso;
    int queso;
    bool arroz;
};
typedef struct Orden orden;

Orden solicitarorden(){
    int num;
    orden p;
    cout << "Revueltas: "; cin >> p.revueltas;
    cout << "Frijol con queso: "; cin >> p.frijolconqueso;
    cout << "Queso: "; cin >> p.queso;
    cout << "Si las desea de maiz inserte 1 o si las desea de arroz inserte 2 "; cin>>num;
      if(num==2)
      p.arroz=true;
      else
      p.arroz=false;
    return p;
}

void mostrarorden(orden p){
    cout<<"Su pedido es: "<<endl;
    cout << "Revueltas: " << p.revueltas<< endl;
    cout << "Frijol con queso: " << p.frijolconqueso << endl;
    cout << "Queso: " << p.queso << endl;
       if(p.arroz==true)
       cout<<"Masa principal: Arroz"<<endl;
       else
       cout<<"Masa principal: Maiz"<<endl;

    cout << endl;
}

vector<orden> lista;

void agregarorden(){
    orden p = solicitarorden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++) 
        mostrarorden(lista[i]);
}

int main(){
    cout << "Inicializando..." << endl;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Pasatiempo\n\t2) Ver pasatiempos"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarorden();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}