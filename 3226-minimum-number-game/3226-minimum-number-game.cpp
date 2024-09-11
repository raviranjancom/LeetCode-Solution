class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        int n=size(nums);
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i+=2){
            ans.push_back(nums[i]);
            ans.push_back(nums[i-1]);
        }
        return ans;
    }
};