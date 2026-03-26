// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        string s = to_string(n);
        int len = s.length();
        int sum=0;
        for(char c:s)
            {
                int d=c-'0';
                int ans=1;
                for(int i=0;i<len;i++)ans*=d;
                sum+=ans;
            }
    
    return sum==n;
    }
};