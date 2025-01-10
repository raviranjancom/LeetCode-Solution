class Solution {
public:
    bool isSubset(vector<int> ds2, vector<int> ds1){
        for(int i=0;i<26 ;i++){
            if(ds2[i] > ds1[i]){
                return false;
            }
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;

        vector<int> ds2(26, 0);
        for(string word : words2){
            vector<int> temp(26,0);
            for(char ch : word){
                temp[ch - 'a']++;
                ds2[ch - 'a']=max(ds2[ch - 'a'], temp[ch - 'a']);
            }
        }

        for(string word : words1){
            vector<int> ds1(26,0);
            for(char ch : word){
                ds1[ch-'a']++;
            }
            if(isSubset(ds2, ds1)){
                ans.push_back(word);
            }
        }
        return ans;
    }
};
