class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size(),ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                bool temp=false;
                string s1=words[i],s2=words[j];
                if(s2.find(s1)==0 && s2.rfind(s1)==s2.length()-s1.length()) temp=true;
                if (temp) ans++;
            }
        }
        return ans;
    }
};
