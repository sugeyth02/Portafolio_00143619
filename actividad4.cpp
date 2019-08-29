#include <iostream>
#include <string>

using namespace std;

struct continente{
    string nombre;
    string pais[5];
    string capital[5];
    int habitantes[5];
    float promedio[5];
};
typedef struct continente Continente;

void llenar(Continente *cont){
    string nombre, pais, capital;
    int habitantes;
    float promedio;
    cout<<(*cont).nombre<<endl;
    cout<<"Ingrese 5 paises"<<endl;
    for(int i=0;i<5;i++){
        cout<<"Pais "<<i+1<<": "; getline(cin, pais);
        (*cont).pais[i]=pais;
        cout<<"Capital: "; getline(cin, capital);
        (*cont).capital[i]=capital;
         cout<<"Numero de habitantes: "; cin>>habitantes;
        (*cont).habitantes[i]=habitantes;
        cout<<"Promedio de edades: "; cin>>promedio;
        (*cont).promedio[i]=promedio;
        cin.ignore(100,'\n');
    }
}

// void leer(Continente *cont){
//     for(int i=0;i<5;i++){
//         cout << "Pais " << i+1 <<endl;
//         cout << (*cont).pais[i] << endl;
//     }
// }


int main (){
	Continente continenteafrica;
    continenteafrica.nombre = "1- Africa";
    Continente america;
	Continente asia;
	Continente europa;
	Continente oceania;

    llenar(&continenteafrica);
    llenar(&america);
    llenar(&asia);
    llenar(&europa);
    llenar(&oceania);

return 0;
}
