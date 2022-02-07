class Solution {
public:
    char findTheDifference(string s, string t) {
       unordered_map<char,int>mp;
        char a;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
            mp[t[i]]++;
        for(auto i:mp){
            if(i.second%2==1){
                a = i.first;
            }
        }
    return a;
    }
};