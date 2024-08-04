#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int key){
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    cout<<"s is: "<<s<<endl;
    cout<<"e is:"<<e<<endl;
    return binarySearch(arr,s,e,key);
}
int main(){
    int arr[]={2,3,4,5,6,20,30,32};
    if(binarySearch(arr,0,7,32)){
        cout<<"Element present"<<endl;
    }
    else{
        cout<<"Element absent"<<endl;
    }

}