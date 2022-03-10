// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int isPossible (string S)
{
    int no_of_chars = 256;
    int count[no_of_chars] = {0};
    for(int i=0;i<S.length();i++){
        count[S[i]]++;
    }
    int odd = 0;
    for(int i=0;i<no_of_chars;i++){
    if(count[i]&1)
       odd++;
    if(odd>1)
    return false;
    }
    return true;
}