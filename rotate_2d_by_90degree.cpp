#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3];
    // for(int i=0; i<=2; i++){
    //     for(int j=0; j<=2; j++){
    //         cin>>arr[j][i];
    //     }
    // }

    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            cin>>arr[i][j];
        }
    }
    // for(int i=0; i<2; i++){
    //     for(int j=2; j>=0; j--){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }


     for(int j=0; j<=2; j++){
        for(int i=2; i>=0; i--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
