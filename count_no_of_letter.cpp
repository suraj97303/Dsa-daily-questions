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
        string ans ="";
        cin>>ans;
        int n = ans.size();
        int i, j;
        string temp = ans;
        reverse(temp.begin(),temp.end());
        if(temp==ans){
            cout<<"Yes"<<endl;
        }
           for( i=0; i<n ;i++){
               int count =0;
               for( j=0; j<n ; j++){
                
                   if(j<i && ans[i]==ans[j]){
                       break;
                   }
                   if(ans[i]==ans[j]){
                       count++;
                   }
               }
               cout<<"element each present"<<ans[i]<<" "<<count<<endl;
           } 
        
    }
    return 0;
}
