class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m;
        int n = s.length();
        int total = t.length();
        for(int i = 0; i< t.length();i++){
            m[t[i]]++;
        }
        int st = 0,end = 0, ans = INT_MAX, idx = -1;

        while(end < n){
            m[s[end]]--;
            if(m[s[end]] >= 0) total--;

            while(total < 1 && st <= end){
                if(ans > end-st+1){
                    ans = end-st+1;
                    idx = st;
                }

                m[s[st]]++;
                if(m[s[st]] > 0) total++;

                
                st++;
            }
            end++;
        }
        if(idx == -1) return "";
        string res = "";
        for(int i = idx ; i<ans+idx;i++){
            res += s[i];
        }

        return res;        
    }
};
