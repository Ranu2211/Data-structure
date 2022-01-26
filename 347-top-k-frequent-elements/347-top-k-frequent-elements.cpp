class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
     unordered_map<int,int>map;
     for(int i=0;i<nums.size();i++){
         map[nums[i]]++;
     }
     for(auto i=map.begin();i!=map.end();i++){
           q.push({i->second,i->first});
           if(q.size()>k){
               q.pop();
           }          
     }
     while(q.size()>0){
         v.push_back(q.top().second);
         q.pop();
     }
        return v;
    }
    
};