class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
    unordered_map<int,int> m;
    int n  = nums.size();

    for(int i=0;i<n;i++){
        int cmp = t - nums[i];
        if(m.find(cmp) != m.end()){
            return {m[cmp],i};;
        }
        m.insert({nums[i],i});
    }
    return {};
    }
};