class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size() == 1)return false;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')st.push(s[i]);
            else{
                if(!st.empty()){
                char x = st.top();
               if((x == '{' && s[i] == '}') || (x == '[' && s[i] == ']') || (x == '(' && s[i] == ')'))
                st.pop();
            else return false;
            }
                 else return false;
           }
          
        }
        if(st.empty())
        return true;
        else return false;
    }
};