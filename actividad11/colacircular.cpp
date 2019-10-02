#include <iostream>
using namespace std;
#define SIZE 5
int A[SIZE];
int frente = -1;
int final = -1;

//Funcion para verificar si la cola esta vacia 
bool isempty()
{
 if(frente == -1 && final == -1)
 return true;
 else
 return false;
}

//funcion para agregar elementos en la cola
void enqueue ( int value )
{
 //cola llena
 if ((final + 1)%SIZE == frente)
    cout<<"La cola esta llena \n";
 else
 {
  //primer elemento insertado
  if( frente == -1)
     frente = 0;
 //insert element at rear
 final = (final+1)%SIZE;
   A[final] = value;
 }
}

//funcion para eliminar elementos de la cola
void dequeue ( )
{
 if( isempty() )
  cout<<"La cola esta vaciaa\n";
 else
 //si solo hay un elemento
 if( frente == final ){
  cout<<"El elemento eliminado fue: "<<A[frente]<<endl;
  frente = final = -1;
  cout<<"La cola esta vacia"<<endl;
 }
 else{
  cout<<"El elemento eliminado fue: "<<A[frente]<<endl;
  frente = (frente + 1)%SIZE;
  cout<<"El nuevo elemento del frente es: "<<A[frente]<<endl;
 }
}

//funcion para mostrar elemento del frente
void showfront( )
{
 if( isempty())
 cout<<"La cola esta vacia\n";
 else
 cout<<"El elemento del frente es:"<<A[frente];
}

//funcion para mostrar la cola
void displayQueue()
{
 if(isempty())
  cout<<"La cola esta vacia\n";
 else
 {
  int i;
  if( frente <= final )
  {
   for( i=frente ; i<= final ; i++)
   cout<<A[i]<<" ";
  }
  else
  {
   i=frente;
   while( i < SIZE)
   {
   cout<<A[i]<<" ";
   i++;
   }
   i=0;
   while( i <= final)
   {
   cout<<A[i]<<" ";
   i++;
   }
  }
 }
}

int main()
{
 int opcion, flag=1, valor;
 while( flag == 1)
 {
     cout<<"\nEscoga una opcion: "<<endl;
  cout<<"1.Insertar elemento\n2.Eliminar elemento\n3.Mostrar el elemento del frente\n4.Mostrar cola\n5.Salir\n";
  cin>>opcion;
  switch (opcion)
  {
  case 1: cout<<"Ingrese un valor:\n";
          cin>>valor;
          enqueue(valor);
          break;
  case 2: dequeue();
          break;
  case 3: showfront();
          break;
  case 4: displayQueue();
          break;
  case 5: flag = 0;
          break;
          default: cout<<"Ingrese una opcion."<<endl;
  }
 }

 return 0;
}