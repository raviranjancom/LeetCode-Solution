class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=size(nums);
        int s=0,m=0,c=0,t=INT_MIN;
        for(int i=0;i<n;i++){
            t=max(t,nums[i]);
            s+=nums[i];
            if(s<0){
                s=0;
                c++;
            }
            m=max(s,m);
        }
        if(n==c) return t;
        else return m;
    }
};
