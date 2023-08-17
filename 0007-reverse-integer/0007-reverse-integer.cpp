class Solution {
public:
    int reverse(int x) {
        long long int res=0;
        int s=0;
        if(x >= INT_MAX || x <=INT_MIN)return 0;
        if(x>=0){s=0;}
        else {s=1;x*=-1;}
        // int i=10;
        vector<int> rev;
        while(x){
           rev.push_back(x%10);
           x /=10;
        }
        long long j=1;
        for(int i=rev.size()-1;i>=0;i--){
               res+= rev[i]*j;
               j*=10;
        }

        if(res >= INT_MAX || res<= INT_MIN)return 0;
        else return (s)? -res: res;
    }
};