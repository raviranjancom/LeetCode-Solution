class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        while(i<=n+m && j<n){
            if(nums1[i]<=nums2[j] && nums1[i]!=0) i++;
            else{
                if(nums2[j]==0) j++;
                else{
                    int t=nums1[i];
                    nums1[i]=nums2[j];
                    nums2[j]=t;
                }
            }
        }
        sort(nums1.begin(),nums1.end());
    }
};