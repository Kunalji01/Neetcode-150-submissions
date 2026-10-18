class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int st = 0;
        int end = n-1;
        int ans = -1;

        while(st <= end){
            int mid = st+(end-st)/2;
            if(nums[mid] == target){
                ans = mid;
                break;
            }
            if(nums[st] == target){
                ans = st;
                break;
            }
            if(nums[end] == target){
                ans = end;
                break;
            }
            if(nums[st] < nums[end]){
                if(nums[mid]> target){
                    end = mid-1;
                }
                else st = mid+1;
            }
            
            else{
                if(nums[st] <= nums[mid]){
                    if(nums[st] <= target && target < nums[mid]) {
                        end = mid-1;
                    }
                    else{
                        st = mid+1;
                    }
                }
                else{
                    if(nums[mid] < target && target <= nums[end]){
                        st = mid+1;
                    }
                    else{
                        end = mid-1;
                    }
                }
            }
             

        }
        return ans;
        
    }
};
