class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int> track, ans;
        int x=0;
        for(int i=0;i<words.size();i++){
            int m=words[i].size();
            if((words[i][0]=='a'||words[i][0]=='e'||words[i][0]=='i'||words[i][0]=='o'||words[i][0]=='u')&&(words[i][m-1]=='a'||words[i][m-1]=='e'||words[i][m-1]=='i'||words[i][m-1]=='o'||words[i][m-1]=='u')){
                x++;
            }
            track.push_back(x);
        }

        for(int i=0;i<n;i++){
            int l=queries[i][0],r=queries[i][1];
            int y;
            if(l>0){
                y=track[r]-track[l-1];
                ans.push_back(y);
            }
            else{
                y=track[r];
                ans.push_back(y);
            }
        }
        return ans;
    }
};
