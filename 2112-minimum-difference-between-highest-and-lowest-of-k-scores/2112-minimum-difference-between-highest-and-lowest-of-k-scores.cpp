class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int ans=INT_MAX;
        int i=0;
        int w = k-1;
        sort(nums.begin(),nums.end());
        
        while(w < n){
            ans = min(ans, nums[w]-nums[i]);
            i++;
            w++;
        }
        return ans;
    }
};