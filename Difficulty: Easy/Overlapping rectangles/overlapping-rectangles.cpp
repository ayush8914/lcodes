// User function Template for C++

class Solution {
  public:
    int doOverlap(vector<int> L1, vector<int> R1, vector<int> L2, vector<int> R2) {
        
        if(L1[1] < R2[1] || L2[1] < R1[1])return false;
        if(R1[0] < L2[0] || R2[0] < L1[0])return false;
        return true;
    }
};