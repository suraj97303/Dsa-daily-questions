class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push({s[i],1});
            }
            else if(s[i]==st.top().first){
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }
            }else {
                st.push({s[i],1});
            }
        }
        
        string ans = "";
        while(!st.empty()){
            int x = st.top().second;
            for(int i=0;i<x;i++)ans+=st.top().first;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
