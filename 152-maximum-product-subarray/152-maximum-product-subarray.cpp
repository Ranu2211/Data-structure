class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_prod= nums[0], min_prod= nums[0];
        int maxi = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0)
              swap(max_prod,min_prod);
            max_prod = max(nums[i],nums[i]*max_prod);
            min_prod = min(nums[i],nums[i]*min_prod);
            maxi = max(maxi, max_prod);
        }
        return maxi;
    }
};