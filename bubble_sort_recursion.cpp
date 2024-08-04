#include<iostream>
using namespace std;
void bubble_sort(int *arr,int n){
    //already sorted
    if(n==1 || n==0){
        return;
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(arr,n-1);
}
int main(){
    int arr[5]={3,2,4,1,5};
    bubble_sort(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" "; 
    }
}