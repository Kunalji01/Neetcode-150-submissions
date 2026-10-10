class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int lMax = 0;
        int rMax = 0;
        int maxH = 0;
        int idx = 0;

        for(int i = 0; i< n; i++){
            if(maxH < height[i]){
                maxH = height[i];
                idx = i;
            }
        }

        for(int i = 0; i<idx; i++){
            if(lMax > height[i]){
                ans += lMax-height[i];

            }
            else{
                lMax = height[i];
            }
        }
        for(int i = n-1; i>idx; i--){
            if(rMax > height[i]){
                ans += rMax-height[i];

            }
            else{
                rMax = height[i];
            }
        }

        

        return ans;
        
    }
};
