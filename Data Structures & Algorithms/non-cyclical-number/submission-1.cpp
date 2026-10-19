class Solution {
public:
    
    int sumSq(int n){
        int sum = 0;
        while(n){
            int dig = n%10;
            sum += dig*dig;
            n /= 10;

        }

        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int,int> m;
        while(true){
            int k = n;
            n = sumSq(k);
            if(n == 1)return true;
            if(m.find(n) == m.end()){
                m[n]++;
            }else break;
        }

        return false;
        
    }
};
