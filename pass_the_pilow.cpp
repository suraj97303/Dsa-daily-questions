// brute force approach 
class Solution {
public:
    int passThePillow(int n, int time) {
        int a = 1;
        bool flag = false;
        for(int i = 1; i <= time; i++){
            if(a == n){
                flag = true;
            }
            
            else if (a == 1){
                flag = false;
            }

            if(flag == false){
                a++;
            }
            else if(flag == true){
                a--;
            }
            
            //cout<<a<<endl;
        }



        return a;
    }
};
