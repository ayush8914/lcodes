#include<bits/stdc++.h>
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        // if(n >=1)ans.push_back(1);
        for(int i=1;i<=n;i++){
            ans.push_back(ans[i/2]+ i%2);
        }
        return ans;
    }
};