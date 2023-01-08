class Solution {
public:
  
    int maximumCount(vector<int>& nums) {
        
        int pos_count=0;
        int i;
        for(i=0; i<nums.size(); i++)
        {
         if(nums[i]>0) {
        pos_count++;
         }  
        }
        
        int j;
        int neg_count=0;
        for(j=0; j<nums.size(); j++){
            if(nums[j]<0){
                neg_count++;    
            }
        }
        int ans = max(pos_count, neg_count);
        return ans;
    }
};