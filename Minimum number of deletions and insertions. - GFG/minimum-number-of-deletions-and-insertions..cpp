// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
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
	int minOperations(string str1, string str2) 
	{ 
	    int m = str1.length();
	    int n = str2.length();
	    int del = m - lcs(str1,str2,m,n);
	    int ins = n - lcs(str1,str2,m,n);
	    return del+ins;
	    
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends