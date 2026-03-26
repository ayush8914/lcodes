class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        int start = n - abs(m);
        int end = n + abs(m);
        
        int minDiff=INT_MAX;
        int closest=0;
        
        for(int i=start;i<=end;i++)
        {
            if(i%m==0)
            {
                int diff = abs(n-i);
                if(diff < minDiff || (minDiff == diff && abs(i) > abs(closest))){
                    closest = i;
                    minDiff=diff;
                }
            }
        }
        
        return closest;
    }
};