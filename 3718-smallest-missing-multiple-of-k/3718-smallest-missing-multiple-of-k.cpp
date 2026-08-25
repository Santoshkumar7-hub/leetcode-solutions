class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s(nums.begin(), nums.end());
            int i=1;
            while(true){
                int missed=k*i;
                if(s.find(missed)==s.end()){
                    return missed;
                }
                i++;
            }
    }
};