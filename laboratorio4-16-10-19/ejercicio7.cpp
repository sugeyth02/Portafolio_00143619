#include <iostream>
#include <string>

using namespace std;

struct Nodo
{
    int num;
    Nodo *sig;
};

class Lista
{
    private:
        Nodo *inicio;
        Nodo *final;

    public:
        Nodo* crearNodo()
        {
            int numero;

            cout << "Ingresa un numero: "; cin >> numero;

            Nodo *n = new Nodo;
            n->num = numero;
            
            n->sig = nullptr;
            return n;
        }

        void push()
        {
            Nodo *n = crearNodo();
            if (!inicio)
            {
                inicio = n;
                final = n;
            }else
            {
                final->sig = n;
                final = n;
            }
        }

        void begin()
        {
            Nodo *n = crearNodo();
            if (!inicio)
            {
                inicio = n;
                final = n;
            }else
            {
                n->sig = inicio;
                inicio = n;
            }
        }

        void pop()
        {
            Nodo *temp = inicio;
            inicio = inicio->sig;
            free(temp);
        }

        bool eliminarOcurrencia(int numero){
            Nodo *p = inicio, *q = NULL;
            
            while(p != NULL && (p->num) != numero){
                q = p;
                p = p->sig;
            }
            if(p == NULL){
                return false;
            }
            if(q == NULL)
                inicio = p->sig;
            else
                q->sig = p->sig;
            delete(p);
            
            eliminarOcurrencia(numero);
            return true;
        }

        void mostrar()
        {
            Nodo *temp = inicio;
            if (!inicio)
            {
                cout << "La Lista esta vacía" << endl;
            }else
            {
                while (temp)
                {
                    cout << "Numeros: "<< temp->num << endl;
                    temp = temp->sig;
                }
            }
        }


        Lista()
        {
            this->inicio = nullptr;
            this->final = nullptr;
        }
};


Lista unaLista;

void ingresar()
{
    do{
        int opcion = 0;
        cout << "1) Meter al incio\t2) Meter al final   : ";
        cin >> opcion;
        switch(opcion){
            case 1:
                unaLista.begin();
                return;
            case 2:
                unaLista.push();
                return;
            default: 
                cout << "Opcion erronea!" << endl;
                break;
        }
    }while(true);
}

int main()
{
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Numero\n\t2) Eliminar Ocurrencias"
        << "\n\t3) Mostrar numeros"
        << "\n\t4) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1:
                ingresar();
                break;
            case 2:
                int num;
                cout << "Numero que quieres eliminar su ocurrencia: ";
                cin >> num;
                if(unaLista.eliminarOcurrencia(num)){
                    cout << "Todas las ocurrencias de  " << num << " han sido eliminadas" << endl;
                }else{
                    cout << "No se encontro ocurrencias" << endl;
                }
                break;
            case 3:
                unaLista.mostrar();
                break;
            case 4:
                return 0;
                break;
            default: 
                cout << "Opcion erronea!" << endl;
                break;
        }
    }while(true);

    
    return 0;
}