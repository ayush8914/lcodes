class Solution {
public:
    vector<vector<int>> generate(int nr) {
        vector<vector<int>> res;

        for(int i=0;i<nr;i++){
            vector<int> r(i+1,1);
            for(int j=0;j<i-1;j++){
                r[j+1] = res[i-1][j] + res[i-1][j+1];
            }
            res.push_back(r);
        }
        return res;
    }
};