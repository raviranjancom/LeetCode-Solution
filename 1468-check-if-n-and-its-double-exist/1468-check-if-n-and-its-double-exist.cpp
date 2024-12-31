class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if((mp.find(arr[i]/2) != mp.end() && arr[i]%2==0) || mp.find(2*arr[i]) != mp.end()) return true;
            else mp.insert(arr[i]);
        }
        return false;
    }
};