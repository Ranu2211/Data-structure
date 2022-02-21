class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int ans_index = 0,count =1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[ans_index]){
                count++;
            }
            else
            count--;
            if(count==0){
                ans_index =i;
                count =1;
            }
        }
        int res = nums[ans_index];
        return res;
    }
};