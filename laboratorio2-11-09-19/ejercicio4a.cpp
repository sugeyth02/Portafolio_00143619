#include <iostream>
#include<math.h>
using namespace std;
void pi(int k, float n){
    float i=0;
    if (k ==-1){
    cout<<"el valor de pi es: "<<4*n<<endl;
    return;
    }
    i=((pow(-1,k))/(2*k+1));
    float pii=n+i;
    pi(k-1, pii);
}
int main(){
      int k;
    cout<<"ingrese el valor de k: "<<endl;
    cin>>k;
    pi(k, 0);
}