class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xorn=0;
        int xornums=0;
        for(int i=0; i<=n; i++){
            xorn=xorn^i;
        }
        for(int j=0; j<n; j++){
            xornums=xornums^nums[j];
        }
        return xorn^xornums;
    }
};