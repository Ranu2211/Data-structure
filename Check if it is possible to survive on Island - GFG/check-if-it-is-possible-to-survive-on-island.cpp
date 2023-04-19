//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        int ans =0;
        int sunday = S/7;
        int buying_days =S -sunday;
        int buying_food = S*M;
        if(buying_food % N ==0){
            ans = buying_food/N;
        }
        else{
            ans = (buying_food/N)+1;
        }
        if(ans<=buying_days){
            return ans;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends