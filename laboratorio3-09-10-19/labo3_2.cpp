#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

struct Polinomio{
    float coeficiente;
    int exponente;
   
};
typedef struct Polinomio poli;
vector<poli> lista; 

poli solicitardatos(){
    poli p;
    cout << "Coeficiente de x : "; cin >> p.coeficiente;
    cout << "exponente de x: "; cin >> p.exponente;
    return p;
}

float factor(){
    poli p;
    float n=0;
    float resultado=0;
    cout<<"Ingrese un valor para x: "<<endl;
    cin>>n;
    for (int i=0; i<lista.size(); i++) {
    resultado+=p.coeficiente*pow(n,p.exponente);
    }
    return resultado;
}

void agregardatos(){
    poli p = solicitardatos();
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

int main(){
    cout << "Inicializando..." << endl;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar datos \n\t2) Ver resultado"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregardatos();
            break;
            case 2: cout << "Calculando" << endl;
                cout<<"Resultado: "<< factor()<<endl;;
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}