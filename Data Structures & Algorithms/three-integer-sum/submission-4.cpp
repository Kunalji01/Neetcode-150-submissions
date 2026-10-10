class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size(); 
        
        int k = 0;
        sort(nums.begin(),nums.end());

        vector<vector<int>> ans;

        for(int i = 0; i<n-2; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int t = k-nums[i];

            int j = i+1;
            int l = n-1;
            while(j<l){
                if(nums[j]+ nums[l] == t){
                    ans.push_back({nums[i],nums[j],nums[l]});
                    j++;
                    l--;

                    while(j<l && nums[j] == nums[j-1]){
                        j++;
                    }
                    while(j<l && nums[l] == nums[l+1]){
                        l--;
                    }

                }
                else if(nums[j]+ nums[l] > t) l--;

                else j++;
            }
        }

        return ans;
    }
};
