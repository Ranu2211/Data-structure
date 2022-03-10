// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends



string merge (string S1, string S2)
{
    string merge1 = "";
       int i=0; int j=0; int k=0;
       
       while(i<S1.length() && j<S2.length()){
           if(k%2==0){
               merge1 = merge1 + S1[i];
               i++; 
           }
           else{
               merge1 = merge1 + S2[j];
               j++;
           }
           k++;
       }
       
       while(i<S1.length()){
           merge1 = merge1 + S1[i];
           i++;
       }
           
       while(j<S2.length()){
           merge1 = merge1 + S2[j];j++;}
           
     return merge1;            
   } 
           
           
           
           
           
           
