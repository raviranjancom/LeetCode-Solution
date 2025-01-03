class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total_sum=0;
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            total_sum+=nums[i];
        }
        long long left_sum=0,right_sum=0;
        for(int i=0;i<n-1;i++){
            left_sum+=nums[i];
            right_sum=total_sum - left_sum;
            if(left_sum>=right_sum) ans++;
        }
        return ans;
    }
};
