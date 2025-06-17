// Last updated: 6/17/2025, 12:33:20 PM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j =0;
        string output = "";
        int n = word1.size();
        int m = word2.size();
        while(i<n && j<m){
            output+=word1[i];
            output+=word2[j];
            i++;
            j++;
        }

        if(n>m){
            while(i<n){
                output+=word1[i];
                i++;
            }
        }else if (m>n){
            while(j<m){
                output+=word2[j];
                j++;
            }

        }

        return output;

    }
};