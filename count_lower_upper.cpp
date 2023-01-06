#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void count(int n, string str){
int lower=0; 
    int upper=0; 
    int special =0;
    for(int i=0; i<n; i++){
        if(str[i]>='A' && str[i]<='Z'){
            upper++;
        }
        else if(str[i]>='a' && str[i]<='z'){
            lower++;
        }
        else{
            special++;
        }
             
    
    }
       cout<<lower<<" "<<upper<<" "<<special<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
string str="";
        cin>>str;
     
        count(n, str);  

    }
    return 0;
}
