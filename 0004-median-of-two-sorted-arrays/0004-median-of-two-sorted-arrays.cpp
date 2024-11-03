class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        float ans;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<m;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        if((n+m)%2==0){
            int k=(n+m)/2;
            ans=(float)(nums1[k]+nums1[k-1])/2.0;
        }
        else ans=nums1[((float)(n+m)/2.0)];
        return ans;
    }
};