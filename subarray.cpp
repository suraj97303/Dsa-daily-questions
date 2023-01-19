Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

A subarray is a contiguous part of an array.

Input: nums = [4,5,0,-2,-3,1], k = 5
Output: 7
Explanation: There are 7 subarrays with a sum divisible by k = 5:
[4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3], [-2, -3]




class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int n = A.size();
        if(n==0) return 0;
        
        int i = 0, count = 0;
        int cumm_sum = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        
        while(i<n)
        {
            cumm_sum+= A[i++];
            int y = cumm_sum % K;
            if(y<0)
             y += K;
            
            if(mp.find(y)!=mp.end())
                count+=mp[y];
            
            mp[y]++;
            
        }
        return count;
    }
};
