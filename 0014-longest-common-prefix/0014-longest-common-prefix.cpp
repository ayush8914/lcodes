class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int fn = strs[0].length();
        int t = strs.size();
       string res="";
    //    string s=strs[0];
    if(t != 0){
        for(int i =0;i<fn;i++){
            for(int j=0;j<t;j++){
                if( i == strs[j].length() || strs[j][i] != strs[0][i])return res;
            }
            res += strs[0][i];
        } 
    }
        return res;
    }
};