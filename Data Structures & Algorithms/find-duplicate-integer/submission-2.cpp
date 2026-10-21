class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int,int> m;
        for(int i = 0; i <n;i++){
            if(m.find(nums[i]) == m.end()){
                m[nums[i]]++;
            }
            else{
                ans = nums[i];
                break;
            }
        }

        return ans;
        
    }
};
