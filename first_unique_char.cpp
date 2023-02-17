Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int>m;
        int idx = -1;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        for(int i=0; i<s.size(); i++){
            if(m[s[i]]==1){
            idx = i;
            break;
            }
        }
        return idx;

    }
};
