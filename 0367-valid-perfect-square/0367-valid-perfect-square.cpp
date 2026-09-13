class Solution {
public:
    bool isPerfectSquare(int num) {
        int st=1;
        int end=num;
        bool isperfect=true;
        while(st<=end){
            long long mid=st+(end-st)/2;
            if(mid*mid==num){
                return true;
            }
            if(mid*mid<num){
                st=mid+1;
            }else {
                end=mid-1;
            }
            if(num%mid!=0){
                isperfect = false;
            }
        }
        if(isperfect==false){
            return false;
        }
        return true;
    }
};