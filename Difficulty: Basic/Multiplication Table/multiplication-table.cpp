// User function Template for C++
class Solution {
  public:
    
    void printTable(int n,vector<int> &ans,int i=1){
        if(i==11)return;
        ans.push_back(n*i);
        i++;
        printTable(n,ans,i);
    }
  
    vector<int> getTable(int n) {
        
        vector<int> ans;
        printTable(n,ans);
        return ans;
    }
};