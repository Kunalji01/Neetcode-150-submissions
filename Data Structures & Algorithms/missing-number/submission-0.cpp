class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        
        int expSum = 0;
        int actualSum = 0;

        for(int i = 0; i<=n; i++){
            expSum += i;
        }

        for(int i =0; i<n; i++){
            actualSum += nums[i];

        }

        return expSum-actualSum;
    }
};
