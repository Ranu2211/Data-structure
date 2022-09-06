class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       unordered_map<int,int>mp;
        int n ;
        int res=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i: mp){
          if(i.second>1){
                n = i.second;
                 res += ( n* (n-1))/2;
            }
        }
       
        return res;
    }
};