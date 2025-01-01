class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int k=j+1,l=n-1;
                long long m=target;
                m-=nums[i];
                m-=nums[j];
                while(k<l){
                    if(nums[k]+nums[l] < m) k++;
                    else if(nums[k]+nums[l] > m) l--;
                    else{
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        int p=k,q=l;
                        while(k<l && nums[k]==nums[p]) k++;
                        while(k<l && nums[l]==nums[q]) l--;
                    }
                }
                while(j+1<n && nums[j]==nums[j+1]) j++;
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};
