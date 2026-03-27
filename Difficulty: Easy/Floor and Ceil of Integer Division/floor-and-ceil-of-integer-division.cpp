class Solution {
  public:
    vector<int> divFloorCeil(int a, int b) {
        int q=a/b;
        
        int c=q;
        int f=q;
        
        if((a^b)<0 && a%b!=0)f=q-1;
        
        if((a^b)>0 && a%b!=0)c=q+1;

        return {f,c};
    }
};