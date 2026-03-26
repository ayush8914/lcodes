class Solution {
  public:
    // int b=1;
    // int rev(int n){
    //     if(n==0)return 0;
        
    //     int res = rev(n/10);
    //     res +=(n%10)*b;
    //     b*=10;
    //     return res;
    // }
  
    int reverseDigits(int n) {
        // return rev(n);
        
        int ans=0;
        
        string s=to_string(n);
        reverse(s.begin(),s.end());
        ans = stoi(s);
        
        return ans;
    }
};