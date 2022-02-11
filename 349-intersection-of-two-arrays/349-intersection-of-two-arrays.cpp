class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        set<int>s1,s2;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
            
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        for(auto i: s2){
            if(s1.find(i)!=s1.end()){
                res.push_back(i);
            }
        }
        return res;
        
    }
};