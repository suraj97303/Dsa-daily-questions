class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        string result1 = "",result2 = "";
        int i = 0;
        
        while(S[i]!='\0')
        {
            if(S[i]>='a' && S[i]<='z')
                result1 += S[i];
            else if(!result1.empty())
                result1.pop_back();
            ++i;                
        }
        
        i = 0;
        while(T[i]!='\0')
        {
            if(T[i]>='a' && T[i]<='z')
                result2 += T[i];
            else if(!result2.empty())
                result2.pop_back();
            ++i;                
        }
        
        if(result1.compare(result2)==0)
            return true;
        return false;
    }
};