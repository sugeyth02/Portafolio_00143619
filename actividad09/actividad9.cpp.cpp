#include <iostream>
using namespace std;

struct nodo{
    float elemento;
    struct nodo *siguiente;
};
typedef struct nodo *Pila;

void initialize(Pila *s){
    *s = NULL;
}

bool empty(Pila *s){
    return *s == NULL;
}

void push(Pila *s, float e){
    struct nodo *unNodo;
    unNodo = (struct nodo *)malloc(sizeof(struct nodo));
    unNodo->elemento = e;
    unNodo->siguiente = *s;
    
    *s = unNodo;
    //cout << "Curiosidad: " << &unNodo << "\t";
    //cout << "Nueva direccion: " << *s << endl;
}

float pop(Pila *s){
    if(!empty(s)){
        struct nodo *unNodo = *s;
        float e = (*s)->elemento;
        *s = (*s)->siguiente;
        delete(unNodo);
        //cout << "Nueva direccion: " << *s << endl;
        return e;
    }
    else{
        cout << "Underflow!" << endl;
        return -1;
    }
}

float top(Pila *s){
    if(!empty(s)){
        float e = (*s)->elemento;
        return e;
    }
    else{
        cout << "Underflow!" << endl;
        return -1;
    }
}

int main(){
    Pila unaPila;
    int c;
    initialize(&unaPila);
    cout <<"Cuantos elementos quiere en la pila: "<<endl;
    cin>>c;
    for(int i=1; i<=c; i++){
        float e;
        cout<<"ingrese un elemento: "<<endl;
        cin>>e;
    push(&unaPila,e);
    }
     
    cout << "top: " << top(&unaPila) << endl;
    cout << "pop: " << pop(&unaPila) << endl;
    cout << "top: " << top(&unaPila) << endl;
    cout << "pop: " << pop(&unaPila) << endl;
    
    return 0;
}