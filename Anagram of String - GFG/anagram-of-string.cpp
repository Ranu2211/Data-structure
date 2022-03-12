// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    int a[26] = {0};
    int count = 0;
    int b[26] ={0};
    for(auto i: str1){
        a[i-'a']++;
    }
    for(auto i: str2){
        b[i-'a']++;
    }
    for(int i=0;i<26;i++){
        count+=abs(b[i]-a[i]);
    }
    return count;
    
}