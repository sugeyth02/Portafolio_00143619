#include<iostream>
using namespace std;
int main(){
    int m[2][3] = {{6,7,3},{4,9,1}};
    cout << "Posicion usando la formula *(*m+i*COLS+j) que en nuestro caso es: (100+i*20+j)" << endl;
    cout << "a[0][0]=100" << endl;
    cout << "a[2][1]=141" << endl;
    cout << "a[5][1]=201" << endl;
    cout << "a[1][10]=130" << endl;
    cout << "a[2][10]=150" << endl;
    cout << "a[5][3]=203" << endl;
    cout << "a[9][19]=299" << endl;
    cout<<"Verificando la exprexion matrix[0][0] = *(*(matrix))"<<endl;
    if(m[0][0]==*(*(m))){
        cout<<"Si es valida"<<" "<<m[0][0]<<" "<<*(*(m))<<endl;
    }
        else {
        cout<<"No es valida"<<endl;

    }
    cout<<"Verificando la exprexion matrix[ i ][ j ] = *((*(matrix)) + (i * COLS + j))"<<endl;
    if(m[1][2]==*((*(m)) + (1 * 3+ 2))){
        cout<<"Si es valida"<<" "<<m[1][2]<<" "<<*((*(m)) + (1 * 3+ 2))<<endl;
    }
        else {
        cout<<"No es valida"<<endl;

    }
      cout<<"Verificando la exprexion matrix[ i ][ j ] = *(*(matrix + i) + j)"<<endl;
    if(m[1][2]==*(*(m + 1) + 2)){
        cout<<"Si es valida"<<" "<<m[1][2]<<" "<<*(*(m + 1) + 2) <<endl;
    }
        else {
        cout<<"No es valida"<<endl;

    }
      cout<<"Verificando la exprexion matrix[ i ][ j ] = *(matrix[i] + j)"<<endl;
    if(m[1][2]==*(m[1] + 2)){
        cout<<"Si es valida"<<" "<<m[1][2]<<" "<<*(m[1] + 2)<<endl;
    }
        else {
        cout<<"No es valida"<<endl;

    }
      cout<<"Verificando la exprexion matrix[ i ][ j ] = (*(matrix + i))[j]"<<endl;
    if(m[1][2]==(*(m + 1))[2]){
        cout<<"Si es valida"<<" "<<m[1][2]<<" "<<(*(m + 1))[2]<<endl;
    }
        else {
        cout<<"No es valida"<<endl;

    }
    return 0;
}
