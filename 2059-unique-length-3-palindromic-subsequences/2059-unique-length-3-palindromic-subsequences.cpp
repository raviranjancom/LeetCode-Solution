class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char> ds;
        for(auto it:s){
            ds.insert(it);
        }
        int n=s.size();
        int ans=0;
        for(auto it:ds){
            int left=-1,right=-1;
            for(int i=0;i<n;i++){
                if(it==s[i]){
                    if(left==-1) left=i;
                    right=i;
                }
            }
            unordered_set<char> st;
            for(int j=left+1;j<right;j++){
                st.insert(s[j]);
            }
            ans+=st.size();
        }
        return ans;
    }
};
