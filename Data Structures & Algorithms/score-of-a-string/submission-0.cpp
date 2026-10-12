class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length();
        int ans = 0;

        for(int i = 1; i<n;i++){
            int cal = abs(s[i]-s[i-1]);
            ans += cal;
        }
        return ans;
        
    }
};