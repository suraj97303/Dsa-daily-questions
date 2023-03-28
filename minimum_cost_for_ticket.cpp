You have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array days. Each day is an integer from 1 to 365.

Train tickets are sold in three different ways:

a 1-day pass is sold for costs[0] dollars,
a 7-day pass is sold for costs[1] dollars, and
a 30-day pass is sold for costs[2] dollars.
The passes allow that many days of consecutive travel.

For example, if we get a 7-day pass on day 2, then we can travel for 7 days: 2, 3, 4, 5, 6, 7, and 8.
Return the minimum number of dollars you need to travel every day in the given list of days.

 

Example 1:

Input: days = [1,4,6,7,8,20], costs = [2,7,15]
Output: 11
Explanation: For example, here is one way to buy passes that lets you travel your travel plan:
On day 1, you bought a 1-day pass for costs[0] = $2, which covered day 1.
On day 3, you bought a 7-day pass for costs[1] = $7, which covered days 3, 4, ..., 9.
On day 20, you bought a 1-day pass for costs[0] = $2, which covered day 20.
In total, you spent $11 and covered all the days of your travel.
Example 2:

Input: days = [1,2,3,4,5,6,7,8,9,10,30,31], costs = [2,7,15]
Output: 17
Explanation: For example, here is one way to buy passes that lets you travel your travel plan:
On day 1, you bought a 30-day pass for costs[2] = $15 which covered days 1, 2, ..., 30.
On day 31, you bought a 1-day pass for costs[0] = $2 which covered day 31.
In total, you spent $17 and covered all the days of your travel.
 
  
  class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        int dp[n + 1];
        
        // Base Case
        // If the Days array is empty, then we incur 0 cost to travel
        dp[n] = 0;
        
        for(int i = n - 1; i >= 0; i--) {
            // We try all the possibilities we have
            
            // First by taking 1 day ticket, so find the next suitable day to buy the ticket
            int x = lower_bound(days.begin(), days.end(), days[i] + 1) - days.begin();
            
            // Then by taking 7 day ticket, so find the next suitable day to buy the ticket
            int y = lower_bound(days.begin(), days.end(), days[i] + 7) - days.begin();
            
            // Then by taking 30 day ticket, so find the next suitable day to buy the ticket
            int z = lower_bound(days.begin(), days.end(), days[i] + 30) - days.begin();
            
            // taking the minimum of all the 3 possibility
            dp[i] = min({costs[0] + dp[x], costs[1] + dp[y], costs[2] + dp[z]});
        }
        
        return dp[0];
    }
};
