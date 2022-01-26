#include<bits/stdc++.h>
using namespace std;
 int main(){
     int T, N,K;
     int arr[N];
     
     cin>>T;
     while(T--){
         cin>>N>>K;
         for(int i=0;i<N;i++){
             cin>>arr[i];
         }
         vector<int>res;
         priority_queue<int,vector<int>,greater<int>>min;
         for(int i=0;i<N;i++){
             min.push(arr[i]);
             if(min.size()>K){
                  int temp = min.top();
                 res.push_back(temp);
                 min.pop();
             }
            
         }
     
     while(!min.empty()){
         res.push_back(min.top());
         min.pop();
     }
     for(int i=0;i<N;i++){
     cout<<res[i]<<" ";
     }
     cout<<endl;
     }
     return 0;
 }