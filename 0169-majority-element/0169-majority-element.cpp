class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l = (nums.size()/2) + nums.size()%2;
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]] >= l){
                return nums[i];
            }
        }
       
        return 0;
    }
};