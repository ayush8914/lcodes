class Solution {
public:
    int strStr(string h, string n) {
        
        for(int i=0;i<h.length();i++){
            for(int j=0;j<n.length();j++){
                if(h[i+j] == n[j]){
                   if(j == n.length()-1)return i;
                }
                else break;
            }
        }
        return -1;
    }
};