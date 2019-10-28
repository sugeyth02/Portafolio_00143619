
#include <iostream>
#include <string>

using namespace std;

struct libro{
    string nombre[100];
    int numPaginas[100];
    int top;
};
typedef struct libro Libro;

void initialize(Libro *s){
    s->top = -1;
}
bool empty(Libro *s){
    return s->top < 0;
}
void push(Libro *s, string l, int numpa){
    if(s->top < 99){
        (s->top)++;
        s->nombre[s->top] = l;
        s->numPaginas[s->top] = numpa;
    }
}
void pop(Libro *s){
    if(s->top >= 0){
        cout << "*Libro: " << s->nombre[s->top] << endl;
        cout << "Paginas: " << s->numPaginas[s->top] << endl;
        (s->top)--;
    }
}

void search(Libro s){
    string libro;
    cout << "Ingrese el libro que busca: ";
    cin.ignore();
    getline(cin, libro);
    
    while(!empty(&s)){
        
        if(s.nombre[s.top] == libro){
            cout << "Libro en existencia!" << endl;
            cout << "Numero de paginas: " << s.numPaginas[s.top] << endl;
            return;
        }
        
        if(s.top >= 0){
            (s.top)--;
        }
    }
    
    cout << "No se ha encontrado el libro" << endl;
}

void meter(Libro *s){
    int paginas;
    string titulo = "";
    cin.ignore(100,'\n');   
    cout << "Ingrese el nombre del libro: "; getline(cin, titulo);
    cout << "Ingrese el numero de paginas del libro: "; cin >> paginas;

    push(s, titulo, paginas);

}

int main(){
    Libro libreria;
    
    initialize(&libreria);
    push(&libreria, "Las almas muertas", 33);
    push(&libreria, "100 años de soledad", 140);

    while(true){
        cout << "1-Ingresar libro" << endl;
        cout << "2-Buscar libro" << endl;
        cout << "3-Salir" << endl;
        int n;
        cin >> n;

        if(n == 1){
            meter(&libreria);
        }else if(n == 2){
            search(libreria);
        }else if(n == 3){
            return 0;
        }
        cout << endl;
    }
    
    return 0;
}