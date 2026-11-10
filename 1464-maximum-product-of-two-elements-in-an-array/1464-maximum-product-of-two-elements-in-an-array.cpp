class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi1=INT_MIN;
        int maxi2=INT_MIN;
        int maxIndex=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] > maxi1){
                maxi1 = nums[i];
                maxIndex = i;
            }
        }
        nums.erase(nums.begin() + maxIndex);
        int ns=nums.size();
        for(int j=0; j<ns; j++){
            maxi2=max(maxi2, nums[j]);
        }
        return (maxi1-1)*(maxi2-1);
    }
};