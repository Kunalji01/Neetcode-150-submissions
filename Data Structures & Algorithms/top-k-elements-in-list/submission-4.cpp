class Solution {
public:
    
    static bool comparator(pair<int,int> p1,pair<int,int> p2){
        if(p1.second == p2.second){
            return p1.first > p2.first;
        }
        return p1.second > p2.second;
    }
   
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m ;
        for(int i = 0; i< nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> ans;
        
        vector<pair<int,int>> temp;

        for(auto x : m){
            temp.push_back({x.first,x.second});
            
        }
        sort(temp.begin(),temp.end(),comparator);

        for(int i = 0; i< temp.size(); i++){
            if(k > 0){
                ans.push_back(temp[i].first);
                k--;
            }
            else break;
        }
        return ans;
    }
};
