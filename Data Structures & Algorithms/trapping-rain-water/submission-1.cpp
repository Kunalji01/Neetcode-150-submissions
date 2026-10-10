class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lMax(n,0);
        vector<int> rMax(n,0);

        lMax[0] = 0;
        rMax[n-1] = 0;

        for(int i = 1; i<n; i++){
            lMax[i] = max(lMax[i-1],height[i-1]);
            
        }
        for(int i = n-2;i>=0;i--){
            rMax[i] = max(rMax[i+1],height[i+1]);

        }
        int ans = 0;
        vector<int> temp;
        for(int i = 0; i<n;i++){
            int sum = 0;
            sum += min(lMax[i],rMax[i])-height[i];

            if(sum < 0) sum  = 0;
            temp.push_back(sum);
        }

        for(int x : temp){
            ans += x;
        }

        return ans;
        
    }
};
