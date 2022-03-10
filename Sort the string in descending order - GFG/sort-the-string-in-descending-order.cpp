// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
string ReverseSort(string str);

int main(){
    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        cout << ReverseSort(s) << endl;
    }
return 0;
}
// } Driver Code Ends



string ReverseSort(string str){
    sort(str.begin(),str.end());
    // for(int i=0;i<str.length();i++){
    //     char temp = str[i];
    //     str[i] = str[str.length()-i-1];
    //     str[str.length()-i-1] = temp;
    // }
    reverse(str.begin(),str.end());
    return str;
}