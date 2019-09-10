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
int push(Pila *s, int e){
    if(s->top < 4){
        (s->top)++;
        s->elements[s->top] = e;
        return e;
    }
    return e;
}
int pop(Pila *s){
    int algo;
    if(s->top >= 0){
        algo = s->elements[s->top];
        (s->top)--;
        return algo;
    }
    return algo;
}

int main() {
    int array[5];
    Pila unaPila;
    int ultimo=0;
    initialize(&unaPila);

    if(empty(&unaPila)){
        cout << "Esta vacia" << endl;
        return 0;
    }
    else
        cout << "No esta vacia" << endl;
    //Quitar un valor
  for(int i=0; i<5;i++){
      array[i]=pop(&unaPila);
  }
    cout<<"el ultimo es: "<<array[4]<<endl;

  if(empty(&unaPila))
        cout << "Esta vacia" << endl;
//llenamos
 for(int i=4; i>=0 ;i--){
     cout << array[i] << endl;
     ultimo = push(&unaPila, array[i]);
}

cout<<"el elelemto del top es: "<<ultimo<<endl;

return 0;
}
