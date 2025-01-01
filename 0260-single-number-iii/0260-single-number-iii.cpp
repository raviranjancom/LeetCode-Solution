class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        if(n==2) return {nums[0], nums[1]};
        sort(nums.begin(), nums.end());
        if(nums[0]!=nums[1]) ans.push_back(nums[0]);
        if(nums[n-1]!=nums[n-2]) ans.push_back(nums[n-1]);
        int i=1;
        while(i<n-1){
            if(ans.size()==2) break;
            if(nums[i-1] != nums[i] && nums[i] != nums[i+1]) ans.push_back(nums[i]);
            i++;
        }
        return ans;
    }
};
