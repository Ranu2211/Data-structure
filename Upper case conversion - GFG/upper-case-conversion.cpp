// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}// } Driver Code Ends



string transform(string s)
{
    
    for(int i=0;i<s.length();i++){
        if(i==0 && s[i]!=' ' || s[i]!=' ' && s[i-1]==' '){
            if(s[i]>='a' && s[i] <='z'){
                s[i] = (char)(s[i]-'a'+'A');
            }
            
        }
    }
    return s;
    
}