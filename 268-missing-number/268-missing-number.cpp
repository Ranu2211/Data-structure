class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0 ;
      sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==i){
                res =  i+1;
            }
        }
        return res;
    }
};