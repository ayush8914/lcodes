class Solution {
public:
    int reverse(int x) {
        int s;
        if(x > 0)s=1;
        else s=-1;
        x= abs(x);
        int temp=0;
        temp = x%10;
        x/=10;
        while(x){
            if(temp > INT_MAX/10)return 0;
            temp = temp*10+ x%10;
            x/=10;
        }
        return s*temp;
    }
};