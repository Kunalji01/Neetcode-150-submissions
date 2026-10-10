class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        int cnt = 0;
        int ans = 0;
        map<int,int> m;

        for(int i = 0; i<n ; i++){
            if(m.find(nums[i]) == m.end()){
                m[nums[i]]++;
            }
            
        }

        int prev;

        for(auto it = m.begin();it != m.end();it++){
            if(it == m.begin()) cnt= cnt+1;
            else if(it->first-1 == prev){
                cnt++;
                
            }
            else cnt = 1;

            prev = it->first;
            ans = max(ans,cnt);
        }
         return ans;
    }
};
