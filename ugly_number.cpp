An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return true if n is an ugly number.
  
  
  Input: n = 6
Output: true
Explanation: 6 = 2 × 3
  
  solve using recursion
  
  class Solution {
public:
    bool isUgly(int n) {
    //  if n is negative no then it factor will be always -1
    if(n<=0)
    return false;
    if(n==1)
    return true;
    if(n%2==0)
    return isUgly(n/2);
    else if(n%3==0)
    return isUgly(n/3);
    else if(n%5==0)
    return isUgly(n/5);
    else 
    return false;
        
    }
};
