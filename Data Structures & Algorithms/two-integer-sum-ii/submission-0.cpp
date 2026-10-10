class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(2,0);
        int i = 0;
        int j = n-1;

        while(i<=j){
            int temp = nums[i]+nums[j];
            if(temp> target) j--;
            else if(temp < target) i++;

            else{
                ans[0] = i+1;
                ans[1] = j+1;
                break;
            }

        }

        return ans;

        
    }
};
