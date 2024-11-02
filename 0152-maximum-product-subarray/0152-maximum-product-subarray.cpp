class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            int s=1;
            for(int j=i;j<n;j++){
                s*=nums[j];
                if(s>ans) ans=s;
            }
        }
        return ans;
    }
};
