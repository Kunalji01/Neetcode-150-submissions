class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0) return 0;
        unordered_map<char,int> m;

        int ans = 0;
        int i = 0;
        int j = 0;
        while(j < n){
            if(m.find(s[j]) == m.end()){
                m[s[j]]++;
            }else{
                while(i<=j && s[i] != s[j]  ){
                    m.erase(s[i]);
                    i++;
                }
                m.erase(s[i]);
                i++;

                
                m[s[j]]++;

            }
            
            int res  = j-i;

            ans = max(ans,res);
            j++;
            
        }
        return ans+1;
        
    }
};
