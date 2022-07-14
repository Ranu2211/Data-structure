class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
       int left = 0;
        int n = nums.size();
    for(int right =1; right<n;right++){
        if( nums[left]!= nums[right])
            left++;
        nums[left] =  nums[right];
    }
    return left+1;
    }
};