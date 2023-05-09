//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    
    
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {   
        unordered_map<char,int> m = {{'[',-1},{']',1},{'(',-2},{')',2},{'{',-3},{'}',3}};
        stack<char> s;
        for(char c: x){
           if(m[c] < 0)s.push(c);
           else{
               if(s.empty())return false;
               if(m[s.top()] + m[c] !=0 )return false;
               s.pop();
           }
        }
        if(s.empty())
        return true;
        else return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends