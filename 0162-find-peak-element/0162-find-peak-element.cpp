class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        else if(nums[n-1] > nums[n-2]) return n-1;
        else {
            int a=1,b=n-2,mid;
            while(a<=b){
                mid=(a+b)/2;
                if(nums[mid] > nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
                else if(nums[mid]<nums[mid-1]) b=mid-1;
                else a=mid+1;
            }
            return -1;
        }
    }
};