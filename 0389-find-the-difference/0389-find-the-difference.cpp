class Solution {
public:
    char findTheDifference(string s, string t) {
        int sxor=0;
        int txor=0;
        for(int i=0; i<s.length(); i++){
            sxor=sxor^s[i];
        }
        for(int j=0; j<t.length(); j++){
            txor=txor^t[j];
        }
        return sxor^txor;
    }
};