class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        long long total = 0;
        int maxE = INT_MIN;
        
        for(auto x : piles){
            total += x; 
            maxE = max(maxE,x);
           
        }
        

        int res = 0;

        int st = total/h;
        if(!st) st = 1;
        int end = maxE;
        
        

        while(st <= end){
            int mid = st +(end-st)/2;
            long long ans = 0;
            for(int i= 0;i < n;i++){
                ans += piles[i]/mid;

                if(piles[i]%mid){
                    ans += 1;
                }
            }
            if(ans <= h){
                end = mid-1;
                res = mid;
            }
            else st = mid + 1;

        }

        return res;

    }
};