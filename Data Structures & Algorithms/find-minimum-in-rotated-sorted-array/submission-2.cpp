class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        int ans = nums[0];
        while(st <= end ){
            int mid = st + (end-st)/2;
            if(nums[st] < nums[end]){
                ans = min(ans,nums[st]);
                break;
            }
            ans = min(ans,nums[mid]);

            if(nums[mid]>nums[end]){
                st = mid+1;
            }
            else end = mid-1;
        }
        return ans;
        
    }
};
