Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

  
  
Return the kth positive integer that is missing from this array.
  
  
  
  Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
  
  class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    //    binary search algo
    int low = 0;
    int high = arr.size()-1;
    while(low<=high){
        int mid =low + (high-low)/2;
        if(arr[mid]- (mid+1)<k)
            low = mid+1;
        
        else 
            high = mid-1;
        
    }
    return (low+k);
    }
};
