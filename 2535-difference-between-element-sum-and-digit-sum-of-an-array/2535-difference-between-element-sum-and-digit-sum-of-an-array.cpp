class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int elsum=0;
        int digsum=0;
        for(int i=0; i<n; i++){
            elsum += nums[i];
        }
        for(int j=0; j<n; j++){
            if(nums[j]>9){
            while(nums[j]>0){
                int lastdigit=nums[j]%10;
                digsum += lastdigit;
                nums[j] = nums[j]/10;
            }   
            }else {
                digsum += nums[j];
            }
        }
        return elsum-digsum;
    }
};