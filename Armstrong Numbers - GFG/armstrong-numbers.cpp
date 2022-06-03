// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        int val =n;
      int  rem,res=0;
      while(n!=0){
      rem = n%10;
      res = (rem*rem*rem)+res;
      n= n/10;
      }
     // cout<<res;
   
      if(val==res)
      return "Yes";
      else
      return "No";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends