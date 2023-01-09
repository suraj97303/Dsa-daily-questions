#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int ans[n];
       
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
         ans[0]= arr[0];
        for(int i=1; i<n; i++){
            ans[i]=ans[i-1]+arr[i];
        }
        for(int i=0; i<n; i++){
                    cout<<ans[i]<<" ";    
        }
        cout<<endl;
    }
    return 0;
}
