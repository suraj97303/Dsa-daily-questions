#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        if(sentences.size() == 0)
        return 0;
        
        int count = 0,max_count = 0;
        for(int i = 0; i<sentences.size(); i++)
        {
            int j = 0;
            string s = sentences[i];
            while(j<s.length())
            {
                if(s[j] ==' ')
                count++,j++;

                else
                j++;
            }

            max_count = max(max_count,count);
            count = 0;
        }

        return max_count+1;
    }
};