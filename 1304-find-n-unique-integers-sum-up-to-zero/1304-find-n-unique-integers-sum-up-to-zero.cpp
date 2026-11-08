class Solution {
public:
    vector<int> sumZero(int n) {
     
        vector<int> ans;
        for(int i=-n+1; i<n; i+=2){
            ans.push_back(i);
        }
        return ans;
    }
};