// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
    private:
    void func(int ind,int sum,int N, vector<int>&arr,vector<int>&ans){
        if(ind==N){
        ans.push_back(sum);
        return;     
        }
        func(ind+1,sum+arr[ind],N,arr,ans);
        func(ind+1,sum,N,arr,ans);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
       vector<int>ans;
       func(0,0,N,arr,ans);
       sort(ans.begin(),ans.end());
       return ans;
     
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends