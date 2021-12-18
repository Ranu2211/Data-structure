class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>vec;
        
      for(int i=s.size()-1;i>=0;i--)
      {
          vec.push_back(s[i]);
      }
        s=vec;
        
          }  
};