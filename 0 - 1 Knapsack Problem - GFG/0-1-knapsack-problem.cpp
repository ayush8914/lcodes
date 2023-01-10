//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int t[1001][1001];
    int flag=0;
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int v, int wt[], int val[], int n)
    { 
        if(!flag){
      memset(t,-1,sizeof(t));
      flag =1;
        }   
       if(n == 0 || v== 0)return 0;
      
        if(t[n-1][v-1] != -1)return t[n-1][v-1];
       if(wt[n-1]<= v)
       return t[n-1][v-1]=max(val[n-1]+knapSack(v-wt[n-1],wt,val,n-1),knapSack(v,wt,val,n-1));
       else if(wt[n-1] >v){
       return t[n-1][v-1]=knapSack(v,wt,val,n-1);
       }
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends