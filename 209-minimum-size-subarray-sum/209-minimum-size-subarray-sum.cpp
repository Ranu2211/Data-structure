class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_num = INT_MAX;
        int i=0,j=0,sum=0;
        int n = nums.size();
        while(j<n){
            sum = sum+ nums[j];
            if(sum<target)
                j++;
            else if(sum>=target){
                while(sum>=target){
                     min_num = min(min_num,j-i+1);
                    sum = sum - nums[i];
                    i++;    
                }
                j++;
            }
        }
        if(min_num==INT_MAX)
            return 0;
        else
        return min_num; 
    }
};