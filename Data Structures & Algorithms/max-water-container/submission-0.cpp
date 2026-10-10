class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int ans = 0;

        int i = 0;
        int j = n-1;
        while(i<j){
            int gap = j-i;
            int temp = min(height[i],height[j]);
            ans = max(ans,gap*temp);

            if(height[i] <= height[j])i++;
            else j--;
        }

        return ans;
        
    }
};
