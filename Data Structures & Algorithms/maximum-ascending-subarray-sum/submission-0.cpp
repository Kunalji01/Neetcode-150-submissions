class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int sum = 0;
        for(int i = 0; i<n;i++){
            if(i>0 && nums[i-1] < nums[i]){
                sum += nums[i];
                
            }
            else{
                sum = 0;
                sum += nums[i];
            }

            ans = max(ans,sum);
        }
        return ans;
        
    }
};