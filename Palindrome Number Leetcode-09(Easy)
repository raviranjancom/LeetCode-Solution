#include<math.h>
class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        int r;
        int rev=0;
        while (n!=0){
            if ((rev<(pow(2,31)-1)/10 && rev>(-1)*pow(2,31)/10)){
                r=n%10;
                n=n/10;
                rev=rev*10+r;
            }
            else return false;
        }
        if (rev<0){
            rev=(-1)*rev;
        }
        return (x==rev);
    }
};
