class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(arr[0]>arr[1]) return 0;
        else if(arr[n-1]>arr[n-2]) return n-1;
        else {
            int a=1,b=n-2,c;
            while(a<=b){
                c=(a+b)/2;
                if(arr[c]>arr[c-1] && arr[c]>arr[c+1]) return c;
                else if(arr[c]<arr[c-1]) b=c-1;
                else a=c+1;
            }
        }
        return -1;
    }
};