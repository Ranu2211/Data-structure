class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v;
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]<nums2[j]){
                nums1[k]= nums2[j];
                j--,k--;
            }
            else{
                nums1[k]= nums1[i];
                k--,i--;
            }
        }
        while(i>=0){
            nums1[k]=nums1[i];
            k--,i--;
        }
        while(j>=0){
            nums1[k]=nums2[j];
            k--,j--;
        }
        // for(int i=0;i<m+n;i++){
        //     v.push_back(nums1[i]);
        // }
        
    }
};