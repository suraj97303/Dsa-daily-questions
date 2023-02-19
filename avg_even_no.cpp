Given an integer array nums of positive integers, return the average value of all even integers that are divisible by 3.

Note that the average of n elements is the sum of the n elements divided by n and rounded down to the nearest integer.
  
  
  class Solution {
public:
    int averageValue(vector<int>& nums) {
        int  n = nums.size();
        int res=0;
        int count =0;
       for(int i=0; i<n; i++){
           if(nums[i]%6==0){
               count++;
               res+=nums[i];
           }
       }
  
       if(count==0)
           return 0;
       return res/count;

    }
};
