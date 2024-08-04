#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int s, int mid, int e){
    vector<int> v;
    int i=s;
    int j=mid+1;
    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            v.push_back(arr[i]);
            i++;
        }
        else{
            v.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        v.push_back(arr[i]);
        i++;
    }
    while(j<=e){
        v.push_back(arr[j]);
        j++;
    }
    for(int k=s; k<=e; k++){
        arr[k]=v[k-s];
    }
}
void mergesort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,mid,e);
    
}
int main(){
    int arr[]={39,41,62,84,33,97};
    mergesort(arr,0,5);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

}