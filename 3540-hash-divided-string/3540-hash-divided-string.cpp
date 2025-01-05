class Solution {
public:
    string stringHash(string s, int k) {
        int n=s.size();
        string ans;
        int i=0;
        while(i<n){
            string str;
            while(str.size()<k){
                str.push_back(s[i]);
                i++;
            }
            int x=0;
            for(int j=0;j<k;j++){
                int y=(int)str[j]-97;
                x+=y;
            }
            x=x%26;
            x+=97;
            ans.push_back((char)x);
        }
        return ans;
    }
};
