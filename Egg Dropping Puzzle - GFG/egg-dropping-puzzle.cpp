// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    
     
    public:
    int t[1001][1001];
    Solution(){
        memset(t,-1,sizeof(t));
    }
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
   
   
    int eggDrop(int n, int k) 
    {
        if(n==1)
        return k;
        if(k==0|| k==1)
        return k;
        if(t[n][k]!= -1)
        return t[n][k];
        int mn = INT_MAX;
        int low,high;
        for(int i=1;i<=k;i++)
        {
            if(t[n-1][i-1]!=-1)
            low = t[n-1][i-1];
            else{
            low = eggDrop(n-1,k-1);
            t[n-1][i-1]=low;
            }
            if(t[n][k-i]!=-1)
             high = t[n][k-i];
            else{
            high = eggDrop(n,k-i);
            t[n][k-i]= high;
            }
            int temp = 1+ max(high,low);
            mn = min(mn,temp);
        }
        return mn;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends