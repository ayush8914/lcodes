class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        if(n ==0)return true;
        f.insert(f.begin(),0);
        f.push_back(0); 

        for(int i=1;i<f.size()-1;i++){
        {if(f[i-1]==0 && f[i+1] == 0 && f[i] == 0 ){n--;f[i]=1;}}
        if(!n)return true;
        }
        
    
        return false;
    }
};