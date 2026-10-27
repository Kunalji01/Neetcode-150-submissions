class Solution {
   public:
    string reverseWords(string s) {
        int n = s.length();

        string ans = "";
        string temp = "";

        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                while (i<n && s[i] != ' ') {
                    temp += s[i];
                    i++;
                }
                reverse(temp.begin(), temp.end());
                ans += temp;
            }
            temp = "";
            if(i < n-1)ans += " ";


            
        }

        return ans;
    }
};
