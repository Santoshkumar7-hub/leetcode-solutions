class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans=-1;
        int n=arr.size();
        for(int i=0; i<n; i++){
            int count=0;
            int current=arr[i];
            for(int j=0; j<n; j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            if(current==count){
                ans=max(ans, current);
            }
        }
        return ans;
    }
};