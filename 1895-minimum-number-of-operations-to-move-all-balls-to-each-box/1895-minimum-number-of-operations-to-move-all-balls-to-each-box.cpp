class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size(),right_ones=0,left_ones=0,right_count=0,left_count=0,total_count=0,total_ones=0;
        for(int i=0;i<n;i++){
            if(boxes[i]=='1'){
                total_ones+=i;
                total_count++;
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(boxes[i]=='1'){
                left_ones+=i;
                left_count++;
            }
            right_ones=total_ones-left_ones;
            right_count=total_count-left_count;
            int value=abs(right_ones - right_count*i)+abs(left_ones - left_count*i);
            ans.push_back(value);
        }
        return ans;
    }
};
