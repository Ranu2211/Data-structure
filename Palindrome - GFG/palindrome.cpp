//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int ans = n;
		    int rem = 0;
		    while(n!=0){
		      int num = n%10;
		       rem = rem*10 + num;
		       n = n/10;
		       
		    }
		    //cout<<rem;
		    if(rem== ans){
		        return "Yes";
		    }
		    return "No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends