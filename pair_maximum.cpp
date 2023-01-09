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
        int ans[n]={0};
        for(int i=0; i<n; i++){
                    cin>>arr[i];
                }
        int i=0;
        int j=n-1;
        while(i<=j){
            ans[i] = arr[i]+arr[j];
            i++;
            j--;
        }
        sort(ans, ans+n, greater<int>());
        cout<<ans[0]<<endl;
        }
    return 0;
}
