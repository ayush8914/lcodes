class Solution {
public:
    bool isPalindrome(string s) {
        string sa="";
        for(int i=0,k=0;i<s.size();i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                sa+=tolower(s[i]);
            }
        }
        // cout<<sa;
        int l = sa.size();
        for(int i=0;i<l;i++){
            if(sa[i] != sa[l-i-1])
                return false;
        }
        return true;
    }
};