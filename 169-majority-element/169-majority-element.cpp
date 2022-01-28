class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans_index = 0,count=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==nums[ans_index])
                count++;
            else
                count--;
            if(count==0){
                ans_index = i;
                count = 1;
            }
        }
        return nums[ans_index];
    }
//     int is_majority(vector<int>& nums){
//         int count =0;
//         int cand = majorityElement(nums);
//         for(int i=0;i<nums.size();i++)
//             if(nums[i]==cand)
//                 count++;
//             if(count>nums.size()/2)
//                 return cand;
            
//             else
//                 return -1;
            
        
//     }
};