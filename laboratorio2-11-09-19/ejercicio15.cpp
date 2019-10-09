#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void merge(int a[],int left_low,int left_hight,int right_low, int right_hight){
int lenght=right_hight-left_low+1;
int temp[lenght];
int left=left_low;
int right=right_low;
for(int i=0;i<lenght;i++){
    if(left>left_hight){
        temp[i]=a[right++];
    }
    else if(right>right_hight){
            temp[i]=a[left++];
        }
    else if(a[left]<=a[right]){
            temp[i]=a[left++];
        }
      else{
          temp[i]=a[right++];
      }  
}
    for(int i=0; i<lenght;i++){
        a[left_low++]=temp[i];
        }
 }
void merge_Sort(int a[],int low, int hight){
    if(low>=hight)
    return;
    else{
        int mid=(low+hight)/2;
        merge_Sort(a,low,mid);
        merge_Sort(a,mid+1,hight);
        merge(a,low,mid,mid+1,hight);

    }

}
void merge_sort(int a[], int lenght){
    merge_Sort(a,0,lenght-1);
}
void printarr(int a[], int size){
    for(int i=0;i<size;i++){
    cout<<i<<"-"<<a[i]<<endl;
}
}
int main(){
    int aar[]={2,23,10,8,22,6};
    int aar_size=sizeof(aar)/sizeof(aar[0]);
    cout<<"arreglo normal"<<endl;
    printarr(aar,aar_size);
    merge_sort(aar,aar_size);
    cout<<"Arreglo ordenado: "<<endl;
    printarr(aar,aar_size);
    
    return 0;
}
