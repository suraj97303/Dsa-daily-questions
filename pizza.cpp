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
        if(n==1){
            cout<<0<<endl;
        }
        else if(n%2==0){
            int ans = n/2;
            cout<<ans<<endl;
        }
        else {
cout<<n<<endl;}
    }
    return 0;
}
