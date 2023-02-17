Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.
  
  
  class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     int freq1[130]={};
     int freq2[130]={};
     int i;
     for(char &i:magazine){
         freq1[i]++;
     }
     for(char &i:ransomNote)
         freq2[i]++;
     
for(int i='a'; i<='z'; i++){
    if(freq2[i]>freq1[i])
        return 0;
    
}
return 1;
    }
};
