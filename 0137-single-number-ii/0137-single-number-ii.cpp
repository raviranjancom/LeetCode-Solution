class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        sort(nums.begin(), nums.end());
        int i=1;
        while(i<n){
            if(nums[i-1]!=nums[i]) return nums[i-1];
            i+=3;
        }
        return nums[n-1];
    }
};