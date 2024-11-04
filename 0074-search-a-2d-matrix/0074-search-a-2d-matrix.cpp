class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0,bot=n-1,mid1;
        while(top<=bot){
            int mid=(top+bot)/2;
            if(matrix[mid][0]<target && matrix[mid][m-1]>target) break;
            else if(matrix[mid][0]>target) bot=mid-1;
            else top=mid+1;
        }
        mid1=(top+bot)/2;
        int l=0,r=m-1,mid2;
        while(l<=r){
            mid2=(l+r)/2;
            if(matrix[mid1][mid2]==target) return true;
            else if(matrix[mid1][mid2]>target) r=mid2-1;
            else l=mid2+1;
        }
        return false;
    }
};
