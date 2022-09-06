class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans = nums;
        sort(ans.begin(),ans.end());
        unordered_map<int,int>mp;
        for(int i=ans.size()-1;i>=0;i--){
            mp[ans[i]]= i;
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = mp[nums[i]];
            
        }
        return nums;
    }
};