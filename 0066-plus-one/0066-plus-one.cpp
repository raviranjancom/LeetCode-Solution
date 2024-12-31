class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1, i=digits.size()-1;
        while(i>-1 && carry==1){
            if(digits[i]+carry < 10){
                digits[i] = (digits[i]+carry)%10;
                carry=0;
                break;
            }
            else{
                carry=(digits[i]+carry)/10;
                digits[i] = (digits[i]+carry)%10;
                i--;
            }
        }
        if(carry > 0) digits.insert(digits.begin(), carry);
        return digits;
    }
};