class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        int ans=values[0]+values[1]-1,m=values[0]+values[1]-1,t=values[0];
        for(int i=2;i<n;i++){
            t=max(values[i-1]+i-1, t);
            m=values[i]-i+t;
            ans=max(m,ans);
        }
        return ans;
    }
};