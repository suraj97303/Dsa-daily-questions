Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
  
  
  class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> arr;

    for (size_t i = 0, j = 0; i + j < nums1.size() + nums2.size(); ) {
        if (nums1.size() == i) {
            arr.push_back(nums2[j]);
            j++;
        }
        else if (nums2.size() == j) {
            arr.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] <= nums2[j]) {
            arr.push_back(nums1[i]);
            i++;
        }
        else {
            arr.push_back(nums2[j]);
            j++;
        }
    }

    if (arr.size() % 2 == 0) {
        return (float)(arr[arr.size()/2] + arr[arr.size()/2-1])/2;
    }
    else {
        return arr[(arr.size()-1)/2];
    }
    }};
