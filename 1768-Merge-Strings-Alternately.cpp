class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string result="";
        while(i<word1.size()||i<word2.size()){
            if(i<word1.size()){
                result+=word1[i];
            }
            if(i<word2.size()){
                result+=word2[i];
            }
            i++;
        }
    return result;
    }
};