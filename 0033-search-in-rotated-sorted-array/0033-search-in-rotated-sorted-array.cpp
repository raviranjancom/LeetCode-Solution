class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int a=0,b=n-1;
        int mid=(a+b)/2,ans;
        while(a<=b){
            mid=(a+b)/2;
            if(nums[mid]==target) return mid;
            if(nums[a]<=nums[mid]){
                if(target<=nums[mid] && target>=nums[a]){
                    b=mid-1;
                }
                else a=mid+1;
            }
            else{
                if(target>=nums[mid] && target<=nums[b]){
                    a=mid+1;
                }
                else b=mid-1;
            }
        }
        return -1;
    }
};
