class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,0);
        int com = -1;
        int i = n-1;
        while(i >= 0){
            ans[i] = com;
            com = max(com,arr[i]);
            i--;
        }
        return ans;
        
    }
};