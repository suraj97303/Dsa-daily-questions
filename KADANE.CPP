#include<bits/stdc++.h>
using namespace std;
// maxsum using kadane algo    TC (O(N))
void maxSumSubArray(int arr[],int n){
    int curSum=0;
    int maxsum=0;
    // if all array element is negative then just put 
    // maxsum = INT_MIN;
for(int i=0; i<n; i++){
    curSum = curSum+arr[i];
    if(curSum>maxsum){
        maxsum = curSum;
    }
    if(curSum<0){
        curSum=0;
    }
    
}
cout<<maxsum<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    maxSumSubArray(arr,n);
    return 0;
}
