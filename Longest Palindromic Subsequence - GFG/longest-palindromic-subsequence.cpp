// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int lcs(string X, string Y, int m, int n){
        int dp[m+1][n+1];
        for(int i=0;i<m+1;i++)
            dp[i][0] = 0;
          for(int j=0;j<n+1;j++)
          dp[0][j] = 0;
          
          for(int i=1;i<m+1;i++)
          for(int j=1;j<n+1;j++)
              if(X[i-1]==Y[j-1])
              dp[i][j] =  1+ dp[i-1][j-1];
              else
              dp[i][j] =  max(dp[i-1][j],dp[i][j-1]);
              
          return dp[m][n];
          
        
    }
    int longestPalinSubseq(string A) {
        string b = A;
        reverse(A.begin(),A.end());
        return lcs(A,b,A.length(),b.length());
    }
};

// { Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends