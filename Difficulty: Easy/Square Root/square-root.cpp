class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int i=0;
        for(;i*i <=n;i++){}
        return --i;
    }
};