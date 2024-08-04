#include<iostream>
using namespace std;
void selection_sort(int arr[],int beginIndex, int size){
    if(beginIndex>=size){
        return;
    }
    int minIndex=beginIndex;
    for(int i=beginIndex; i<size; i++){
        if(arr[minIndex]>arr[i]){
            minIndex=i;
        }
    }
    swap(arr[beginIndex],arr[minIndex]);
    selection_sort(arr,beginIndex+1,size);
}
int main(){
    int arr[]={3,4,2,9,1};
    selection_sort(arr,0,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}