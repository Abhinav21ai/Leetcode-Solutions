// Last updated: 6/17/2025, 12:47:38 PM
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for(char C: t){
            if(s[i] == C){
                i++;
            }
        }
        if(i==s.length()){
            return true;
        }
        
        return false;

    }
};