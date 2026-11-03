class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            maxi=max(nums[i], maxi);
        }
        int count=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j]<maxi){
                count+=maxi-nums[j];
            }
        }
        return count;
    }
};