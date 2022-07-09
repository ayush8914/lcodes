class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v(nums);
        nums.clear();
        for(int i=0;i<v.size();i++){
            if(v[i] != val)nums.push_back(v[i]);
        }
        return nums.size();
    }
};