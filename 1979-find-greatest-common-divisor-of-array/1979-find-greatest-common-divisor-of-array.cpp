class Solution {
public:
    int findGCD(vector<int>& nums) {
        int big=INT_MIN;
        int small=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            big=max(big, nums[i]);
            small=min(small, nums[i]);
        }
        for(int j=small; j>=1; j--){
            if(big%j==0 && small%j==0){
                return j;
            }
        }
        return 1;
    }
};