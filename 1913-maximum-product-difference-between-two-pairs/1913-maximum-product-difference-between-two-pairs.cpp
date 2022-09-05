class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int c = nums[n-2] * nums[n-1];
        int d = nums[0] * nums[1];
        int res = c-d;
        return res;
    }
};