#include<iostream>
using namespace std;
void insertion_sort(int arr[],int size){
    if(size<=1){
        return;
    }
    insertion_sort(arr,size-1);
    int last=arr[size-1];
    int j=size-2;
    while(j>=0 && arr[j]>last){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;
}
int main(){
    int arr[]={3,4,2,9,1};
    insertion_sort(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}