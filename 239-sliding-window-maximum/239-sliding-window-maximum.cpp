class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
              
        int n = nums.size();
       priority_queue<pair<int,int>>max;
         vector<int>v;
       for(int i=0;i<nums.size();i++){
           max.push(make_pair(nums[i],i));
            while(!max.empty() && max.top().second<=(i-k))
                max.pop();
                //max.push(make_pair(nums[i],i));
                if(i+1>=k)
                    v.push_back(max.top().first);
            
        }
        return v;
            
    }
};