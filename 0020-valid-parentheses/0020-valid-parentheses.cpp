class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        //optimization
        map<char,char> p;
        p[']'] = '[';
        p[')'] = '(';
        p['}'] = '{';

        map<char,int> p1;
        p1['{'] =1;
        p1['[']=1;
        p1['(']=1;
        for(int i=0;i<s.length();i++){
            
            if(p1[s[i]])st.push(s[i]);
            else if(p[s[i]]){
                if(st.empty())
            return false;
            else {
                if(p[s[i]] == st.top() ){
                     st.pop();   
                 }
                 else return false;
                //  if(!st.empty())st.pop();
            }
            }
                
        }
        if(!st.empty())return false;

        return true;
    }
};