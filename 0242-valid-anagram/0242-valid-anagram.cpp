class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char,int> sm;
       set<char> st;
    //    map<char,int> tm;

       for(int i=0;i<s.length();i++){sm[s[i]]++;
        st.insert(s[i]);
       }
       for(int i=0;i<t.length();i++)
       {
          if(sm[t[i]])
          sm[t[i]]--;
          else return false;
       }
       for(auto i:st) {
       if(sm[i])
       return false;
       }
       return true;

    }
};