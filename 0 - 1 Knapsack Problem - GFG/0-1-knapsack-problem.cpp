//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:

    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n)
    {
        int t[n+1][w+1]={0};
        for(int i=0;i<=n;i++)t[i][0]=0;
        for(int j=0;j<=w;j++)t[0][j]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=w;j++){
                if(j>=wt[i-1]){
                 
                    t[i][j] =max(t[i-1][j],val[i-1]+t[i-1][j-wt[i-1]]);
                }
                else    t[i][j] = t[i-1][j];
            }
        }
        return t[n][w];
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