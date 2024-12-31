class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            int j=i+1, k=n-1;
            if(i>0 && nums[i]==nums[i-1]) continue;
            while(j<k){
                int s=nums[i]+nums[j]+nums[k];
                if(s==0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                while(j<k &&  nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
                }
                else if(s<0) j++;
                else k--;
            }
        }
        return ans;
    }
};