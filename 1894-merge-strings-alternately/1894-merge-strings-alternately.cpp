class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int n = w1.length();
        int m = w2.length();
        int i=0;
        int j=0;
        string res;
        while(i< n || i < m){
            if(i< n){
             res += w1[i];
            }
             if(i<m){
             res += w2[i];
             }
             i++;
        }

        
    

        return res;
    }

};