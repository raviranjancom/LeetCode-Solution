class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<vector<int>>> dp(target + 1);
        dp[0].push_back({});

        for (int i = 1; i <= target; i++) {
            for (int candidate : candidates) {
                if (candidate <= i) {
                    for (auto& prev : dp[i - candidate]) {
                        vector<int> temp(prev);
                        temp.push_back(candidate);
                        sort(temp.begin(), temp.end());
                        if (std::find(dp[i].begin(), dp[i].end(), temp) ==
                            dp[i].end()) {
                            dp[i].push_back(temp);
                        }
                    }
                }
            }
        }
        return dp[target];
    }
};