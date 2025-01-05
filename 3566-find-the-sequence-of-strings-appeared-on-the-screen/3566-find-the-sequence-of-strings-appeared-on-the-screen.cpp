class Solution {
public:
    vector<string> stringSequence(string target) {
        int n=target.size();
        string s;
        vector<string> ans;
        for(int i=0;i<n;i++){
            int m=target[i]-97;
            for(int j=0;j<=m;j++){
                if(j==0) s+="a";
                else{
                    s.back()+=1;
                }
                ans.push_back(s);
            }
        }
        //s="";
        return ans;
    }
};
