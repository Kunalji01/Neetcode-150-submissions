class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        vector<int> ans;
        int i = 0;
        int j = n-1;
        while(i<=j){
            if(nums[i] == val && nums[j] == val){
                i++;
                j--;
            }else if(nums[i] == val && nums[j] != val){
                ans.push_back(nums[j]);
                i++;
                j--;
            }
            else if(nums[i] != val && nums[j] == val){
                ans.push_back(nums[i]);
                i++;
                j--;
            }else{
                ans.push_back(nums[i]);
                i++;
            }
            
        }
        
        
        for(int i = 0; i<ans.size();i++){
            nums[i] = ans[i];
        }
        return ans.size();
        
    }
};