class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        int original=x;
        long long reverse=0;
        while(n>0) {
            int lastdigit=n%10;
            reverse=reverse*10+lastdigit;
            n=n/10;
        }
        if(original==reverse){
            return true;
        }else {
            return false;
        }
    }
};