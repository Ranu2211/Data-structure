// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
         map<char,int>m;
           set<int>s1,s2;
           vector<char>v;
           for(int i=0;i<A.size();i++)
           {s1.insert(A[i]);
            
           }
           for(auto ti=s1.begin();ti!=s1.end();ti++)
           {
              m[*ti]++; 
           }
           for(int j=0;j<B.size();j++)
           {s2.insert(B[j]);
               
           }
           for(auto tii=s2.begin();tii!=s2.end();tii++)
           {
                m[*tii]++; 
           }
           for(auto it:m)
           { if(it.second==1)
               v.push_back(it.first);
           }
           sort(v.begin(),v.end());
           string s="";
           for(int i=0;i<v.size();i++)
           {
               s=s+v[i];
           }
           if(s.empty()){
           s="-1";
           }
           return s;
       }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends