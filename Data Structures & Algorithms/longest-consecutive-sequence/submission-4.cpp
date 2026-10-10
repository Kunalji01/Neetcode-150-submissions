class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int x : nums){
            cout<<x<<" "; 
        }

        if(n == 0) return 0;

        int cnt = 0;
        int ans = 0;
        unordered_map<int,int> m;

        for(int i = 0; i<n ; i++){
            if(m.find(nums[i]) == m.end()){
                m[nums[i]]++;
                if(i == 0) cnt++;
                else if(nums[i-1]+1 == nums[i]) cnt++;
                else cnt = 1; 
            }
            ans = max(ans,cnt);
            
        }
         return ans;
    }
};
