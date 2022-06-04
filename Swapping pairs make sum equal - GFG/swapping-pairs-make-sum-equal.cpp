// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
	    sort(A,A+n);
	    sort(B,B+m);
        int sumA=0,sumB=0 ,i=0,j=0;
        for(int i=0;i<n;i++){
            sumA+=A[i];
        }
        for(int i=0;i<m;i++){
            sumB+=B[i];
        }
        while(i<n && j<m){
            long p = sumA-A[i]+B[j];
            long q = sumB-B[j]+A[i];
            if(p==q)
            return 1;
           else if(p>q)
            i++;
            else
            j++;
        }
        return -1;
	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends