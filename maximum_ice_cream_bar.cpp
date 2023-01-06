class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans = coins;
        int cnt=0;
          sort(costs.begin(), costs.end());
        for(int i=0; i<costs.size(); i++){
            if(costs[i]>coins){
                return 0;
            }
             if(ans==0 || ans<costs[i]){
                    break;
                }
            ans -= costs[i];  
                cnt++;
               
        }
        return cnt;
    }
};