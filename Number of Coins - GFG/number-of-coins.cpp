//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int m, int v) 
	{ 
	    int t[m+1][v+1]={0};
	    
	    for(int i=1;i<=m;i++)t[i][0] =0;
	    for(int i=1;i<=m;i++){
	        for(int j=1;j<=v;j++){
	            if(i == 1){
	                if(j<coins[i-1])
	                   t[i][j] = 1e8;
	               else t[i][j] = 1+t[i][j-coins[i-1]];
	            }
	            else{
	                if(j < coins[i-1])t[i][j] =t[i-1][j];
	                else t[i][j] = min(t[i-1][j],1+t[i][j-coins[i-1]]);
	            }
	        }
	    }
	    for(int i=1;i<=m;i++){
	        for(int j=1;j<=v;j++)if(t[i][j] >= 1e8)t[i][j]=-1;
	    }
	    
	   // for(int i=0;i<=m;i++){
	   //     for(int j=0;j<=v;j++){
	   //         cout<<t[i][j]<<" ";
	   //     }
	   //     cout<<"\naa\n";
	   // }
	    return t[m][v];
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends