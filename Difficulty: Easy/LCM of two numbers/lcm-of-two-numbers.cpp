class Solution {
  public:
    int lcm(int a, int b) {
        // code here
        int l = max(a,b);
        int s=min(a,b);
        int ans=l;
        while(l<=a*b){
            if(l%s == 0){
             return l;
            }
            l+=max(a,b);
        }
        return l;
        
    }
};