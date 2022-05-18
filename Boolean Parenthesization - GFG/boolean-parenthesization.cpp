// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
unordered_map<string,int>mp;
int solve(string S,int i,int j, bool isTrue){
    if(i>j)
    return false;
    if(i==j){
    if(isTrue == true)
    return S[i] == 'T';
    else
    return S[i] == 'F';
    }
   string temp = to_string(i);
   temp.push_back(' ');
   temp.append(to_string(j));
   temp.push_back(' ');
   temp.append(to_string(isTrue));
   if(mp.find(temp)!=mp.end())
   return mp[temp];
    int ans = 0;
    for(int k = i+1;k<=j-1;k+=2){
         
        int lt = solve(S,i,k-1,true);
        int lf = solve(S,i,k-1,false);
        int rt = solve(S,k+1,j, true);
        int rf = solve(S,k+1,j,false);
        if(S[k]=='&')
        {
            if(isTrue ==true)
            ans = ans+ lt*rt;
            else{
                ans = ans+ (lt*rf)+(rt*lf)+(lf*rf);
            }
        }
        else if(S[k]=='|'){
            if(isTrue == true)
            ans = ans+ (lt*rf)+(rt*lf)+(lt*rt);
            else
            ans = ans+(lf*rf);
        }
        else if(S[k]=='^'){
            if(isTrue == true)
            ans = ans+ (lt*rf)+(rt*lf);
            else
            ans = ans+ (lt*rt)+(lf*rf);
        }
    }
    return mp[temp]=ans%1003;
}
    int countWays(int N, string S){
        mp.clear();
        return solve(S,0,S.size()-1, true)%1003;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends