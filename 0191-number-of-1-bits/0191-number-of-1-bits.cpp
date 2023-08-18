class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt1=0;
        while(n){
            if(n%2 == 1)cnt1++;
            n/=2;
        }
        return cnt1;
    }
};