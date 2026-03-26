class Solution {
  public:
    bool isPalindrome(int n) {
        
        int temp = abs(n);
        int rev=0;
        
        while(temp!=0){
            rev = rev*10 + temp%10;
            temp/=10;
        }
        return rev == abs(n);
    }
};