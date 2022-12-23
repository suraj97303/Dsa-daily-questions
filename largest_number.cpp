
    class Solution {
public:
    string largestNumber(vector<int>& nums) {
vector <string> v;

string ans ="";


for(int i=0; i<nums.size(); i++)
{
  
   
    v.push_back(to_string(nums[i]));

}     
   for(int i=0; i<v.size(); i++){
            for(int j=i+1; j<v.size(); j++){
                if(v[i]+v[j]>v[j]+v[i]){
                    
                }
                else{
                    swap(v[i],v[j]);
                    
                
                }
            }
        }
      bool flag = true;
		for(auto &i: v) {
			ans += i;
			if(i != "0") flag = false;  
		}
    if(flag) return "0";
    return ans;
    }
};
}