class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        unordered_map<string,int> m;
        for(auto x : arr){
            m[x]++;
        }
        string ans = "";

        for(int i = 0;i<n;i++){
            if(m[arr[i]] == 1)k--;
            if(k == 0){
                ans = arr[i];
                break;
            }
        }

        return ans;
    }
};