class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> ans;
        int n = temp.size();
        stack<int> s;
        for(int i = n-1;i>=0;i--){

            while(s.size()>0 && temp[i] >= temp[s.top()]){
                s.pop();
            }
            if(s.size() == 0){
                ans.push_back(0);
            }
            else{
                ans.push_back(s.top()-i);
            }

            s.push(i);
        }

        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};
