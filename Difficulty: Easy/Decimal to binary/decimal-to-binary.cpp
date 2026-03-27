class Solution {
  public:
    string decToBinary(int n) {
        string bin="";
        
        while(n!=0){
            int b = n%2;
            bin.push_back(b+'0');
            n/=2;
        }
        
        reverse(bin.begin(),bin.end());
        return bin;
    }
};