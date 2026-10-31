class Solution {
public:
    int numberOfMatches(int n) {
        int matches=0;
        while(n>1){
            if(n%2==0){
                int lastdigit=n/2;
                matches=matches+lastdigit;
                n=n/2;
            }else{
                int lastdigit=(n-1)/2;
                matches+=lastdigit;
                n=(n+1)/2;
            }
        }
        return matches;
    }
};