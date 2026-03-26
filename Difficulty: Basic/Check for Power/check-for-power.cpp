class Solution {
  public:
    int isPowerOfAnother(int x, int y) {
        
        if(x==1)return y==1;
        long int pow=1;
        while(pow<y)pow= pow*x;
   
        return pow==y;
    }
};