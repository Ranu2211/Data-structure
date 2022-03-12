// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{
  public:
    
    int extractMaximum(string S) 
    { 
        int num = 0;
       int ans = -1;
        for(int i=0;i<S.length();i++){
            if(S[i]>='0' && S[i]<='9'){
                num = num*10+(S[i]-'0');
                ans = max(ans,num);
            }
            else{
               num = 0; 
            }
            
        }
        return ans;
    } 
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.extractMaximum(S)<<endl;
    }
    return 0; 
}   // } Driver Code Ends