class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> ans;
        for(auto it:strs){
            string t=it;
            sort(t.begin(),t.end());
            ans[t].push_back(it);
        }
        vector<vector<string>> result;
        for(auto it:ans){
            result.push_back(it.second);
        }
        return result;
    }
};
