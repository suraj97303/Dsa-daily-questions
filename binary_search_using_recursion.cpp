#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int *arr, int s, int e, int k){
    // base case 
     int mid = s+(e-s)/2;
    if(s>e){
        return false;
    }
   
    if(arr[mid]==k)
    return true;
    if(arr[mid]<k)
    binarySearch(arr,mid+1,e,k);
    else
    binarySearch(arr,s,mid-1,k);
}
int main(){
    int size = 5;
    int arr[size] = {12,34,56,67,69};
    int s=0;
    int e = size-1;
    int k = 69;
  bool ans =  binarySearch(arr,s,e,k);
    if(ans){
        cout<<"elment is found ";
    }
    else{
        cout<<"no elment is present";
    }
    return 0;
}
