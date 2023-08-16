class Solution {
public:
    bool isPalindrome(string s) {
        set<char> st;
        for(int i=0;i<s.length();i++){
            if(!isalnum(s[i]))st.insert(s[i]);
        }

        for(auto i : st){
         s.erase(remove(
                s.begin(), s.end(), i),
            s.end());
        }

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string t=s;
        reverse(s.begin(),s.end());
        cout<<t<<"\n"<<s;
        if(t == s)return true;
        else
        return false;
    }
};