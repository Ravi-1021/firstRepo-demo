#include<iostream>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low,j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j++;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[],int low,int high){
    if(low==high){
        return;
    }
    int p=partition(arr,low,high);
    quickSort(arr,low,p-1);
    quickSort(arr,p+1,high);

}
int main(){
    int arr[]={20,21,38,44,56,24};
    quickSort(arr,0,5);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

}