#include <iostream>
using namespace std;

struct Tpila{
    int elements[5]={1,2,3,4,5};
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s->top = 4;
}

bool empty(Pila *s){
    return s->top < 0;
}

int pop(Pila *s, int e){
    int ultimo=0;
    if(s->top >= 0){
        e = s->elements[s->top];
        (s->top)--;
        return e;
    }
}

int main() {
    Pila unaPila;
    int ultimo=0;
    initialize(&unaPila);

    if(empty(&unaPila)){
        cout << "Esta vacia" << endl;
    }
        else 
        cout << "No esta vacia" << endl;
    //Quitar un valor
  for(int i=0; i<=4;i++){
      int e=0;
      e= pop(&unaPila,i);
      if(i==4)
        cout<<"el ultimo es: "<<e<<endl;

  }
  if(empty(&unaPila))
        cout << "Esta vacia" << endl;
return 0;
}