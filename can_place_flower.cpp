You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule.

 

Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false
 
  
  class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        if(n==0) return true;
        int m=flowerbed.size();
        if(n>=1 && flowerbed.size()==1 && flowerbed[0]==1) return false; 
        if(n==1 && m==1 && flowerbed[0]==0) return true; 
        if(n>m) return false;
        int  cnt=0, i=1; 
        if(flowerbed[0]==0 && flowerbed[1]==0) flowerbed[0]=1, cnt++;
        while(i<m-1){
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                cnt++;
            }
            i++;
        }
        if(flowerbed[m-2]==0 && flowerbed[m-1]==0) cnt++;
        if(cnt>=n) return true;
        return false;
    }
};
