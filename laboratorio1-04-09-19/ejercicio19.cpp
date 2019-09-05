#include <iostream>
using namespace std;
int main(){
    int m[5][5]={};
for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
                if(i>=j){
                        cout<<"Digite: "<<"[ "<<i<<" ]"<<"[ "<<j<<" ]"<<endl;
                        cin>>m[i][j];
                }
        }
}
cout<<endl;
for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<m[i][j];
        }
        cout<<endl;
}
return 0;
}