class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int ans = 0;
        int maxC = 0;
        vector<int> freq(26,0);
        int i = 0;
        int j = 0;
        while(j<n){
            freq[s[j]-'A']++;
            maxC = max(maxC,freq[s[j]-'A']);

            int rep = j-i+1 - maxC;
            
    
            while(rep > k){
                freq[s[i]-'A']--;
                i++;
                rep = j-i+1 - maxC;
                
            }
            
            ans = max(ans,j-i+1);
            j++;

        }

        return ans;
        
    }
};
