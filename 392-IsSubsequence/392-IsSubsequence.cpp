// Last updated: 6/17/2025, 1:05:40 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s.compare(t)==0){
            return true;
        }

        return false;

    }
};