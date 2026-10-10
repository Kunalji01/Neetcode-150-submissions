class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> m;
        vector<int> ans(2);
        int a;
        int b ;

        for(int i = 0;i<n;i++){
            int x = target-nums[i];
            if(m.find(x) == m.end()){
                m[nums[i]]++;
            }
            else{
                a = x;
                b = i;

                break;
            }

        }
        for(int i = 0; i<n; i++){
            if(nums[i] == a){
               ans[0] = i;
               break;
            } 

        }
        ans[1] = b;

        return ans;
        
    }
};
