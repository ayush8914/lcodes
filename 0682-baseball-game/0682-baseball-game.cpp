#include<bits/stdc++.h>
class Solution {
public:
    int calPoints(vector<string>& ops) {
        int ans=0;
        stack<int> st;
        int n = ops.size();
        for(int i=0;i<n;i++){
            int x;
            if(isNumber(ops[i],x) == true){
                st.push(x);
            }
            else if(ops[i] == "C"){
                st.pop();

            }
            else if(ops[i] == "D"){
                int a = st.top();
                st.push(2*a);
            }
            else if(ops[i] == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        return ans;
    }
    bool isNumber(string line, int &n) {
    char* p;
    int i, size = line.size();
    for (i = 0; i < size; ++i) {
        if (i == 0 && line[i] == '-') {
            continue;
        } else if (line[i] < '0' || line[i] > '9') {
            return false;
        }
    }
    n = strtol(line.c_str(), &p, 10);
    return true;
}
};