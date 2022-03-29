class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int v;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
              v = nums[i];
                break;
            }
        }
        
       return v; 
    }
};