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

int poblaciontotal(Continente *cont){
    int poblaciontotal=0;
     for(int i=0;i<5;i++){
        poblaciontotal+=(*cont).habitantes[i];
    }
    return poblaciontotal;
}

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
    int opcion, poblaciontotales=0;
	Continente continenteafrica;
    continenteafrica.nombre = "1- Africa";
    Continente america;
    america.nombre="2- America";
	Continente asia;
    asia.nombre="3- Asia";
	Continente europa;
    europa.nombre="4- Europa";
	Continente oceania;
    oceania.nombre="5- Oceania";

    llenar(&continenteafrica);
    llenar(&america);
    llenar(&asia);
    llenar(&europa);
    llenar(&oceania);
     while(opcion != 5){
        cout << "Ingrese el numero del continente que desea conocer su poblacion total: " << endl << endl;
        cout << "1) Africa "<< endl;
        cout << "2) America"<< endl;
        cout << "3) Asia "<< endl;
        cout << "4) Europa"<< endl;
        cout << "5) Oceania "<< endl;
        cin >> opcion;
        switch(opcion){
            case 1:
               poblaciontotales= poblaciontotal(&continenteafrica);
               cout<<"la poblacion total del continente es: "<<poblaciontotales<<endl;
                break;
            case 2:
                poblaciontotales=poblaciontotal(&america);
                cout<<"la poblacion total del continente es: "<<poblaciontotales<<endl;
                break;
            case 3:
               poblaciontotales= poblaciontotal(&asia);
               cout<<"la poblacion total del continente es: "<<poblaciontotales<<endl;
                break;
            case 4:
                poblaciontotales=poblaciontotal(&europa);
                cout<<"la poblacion total del continente es: "<<poblaciontotales<<endl;
                 break;
            case 5:
                poblaciontotales=poblaciontotal(&oceania);
                cout<<"la poblacion total del continente es: "<<poblaciontotales<<endl;
                break;

        }
    }

return 0;
}
