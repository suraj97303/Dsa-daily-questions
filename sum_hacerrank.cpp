#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
int temp;
    cin>>temp;
   
    long long int sum =0;
 
    while(temp--){
         long long  int   a; long long int b;
            cin>>a>>b;
        for(int i=a;i<= b; i++){
            sum+= i;
        }
        cout<<sum<<endl;
    }

    
    return 0;
}
