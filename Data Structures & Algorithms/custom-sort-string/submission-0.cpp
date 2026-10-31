class Solution {
public:
    string customSortString(string order, string s) {
        int n = order.length();
        int m = s.length();
        string ans;
        unordered_map<char,int> mp;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m;j++){
                if(s[j] == order[i]){
                    ans.push_back(s[j]);
                    mp[s[j]]++;

                }
            }
        }

        for(int i = 0; i<m;i++){
            if(mp.find(s[i]) == mp.end()){
                ans.push_back(s[i]);
                
            }
        }

        return ans;
        
    }
};