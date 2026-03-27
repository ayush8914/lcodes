class Solution {
  public:
    int gcd(int a, int b) {
        // if(a==0 || b==0) return max(a, b);
        // int m = min(a,b);
        // while(m>0){
        //     if(a%m ==0 && b%m==0){
        //         break;
        //     };
        //     m--;
        // }
        // return m;
        
        if(b==0)return a;
        return gcd(b,a%b);

    }
};
