// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string res = "";
        string r = "";
        reverse(S.begin(),S.end());
      for(int i=0;i<S.length();i++){
          if(S[i]=='.'){
              reverse(res.begin(),res.end());
              r+=res;
              r+='.';
              res="";
           }
          else{
              res+=S[i];
            }
        }
      reverse(res.begin(),res.end());
      return r+res;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends