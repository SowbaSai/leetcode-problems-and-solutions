class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=0;i<s.length()-1;++i){
            int d=s[i]-s[i+1];
            if(d<0){
                d=-d;
            }
            score+=d;
        }
        return score;
    }
};