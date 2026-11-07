class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            ans.push_back(start + 2*i);
        }
        int answer=0;
        for(int j=0; j<n; j++){
            answer^=ans[j];
        }
        return answer;
    }
};