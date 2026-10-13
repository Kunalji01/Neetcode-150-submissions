class Solution {
public:

    bool isFreqSame(int freq[],int freq1[]){
        for(int i = 0; i<26;i++){
            if(freq[i] != freq1[i]) return false;
        }

        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i = 0; i < s1.length();i++){
            freq[s1[i]-'a']++;
        }

        int windSize = s1.length();
        for(int i = 0; i<s2.length();i++){
            int windFreq[26] = {0};
            int idx = i;
            while(idx < windSize && idx < s2.length()){
                windFreq[s2[idx]-'a']++;
                idx++;
            }
            windSize++;
            if(isFreqSame(freq,windFreq)) return true ;
        }
        return false;        
    }
};
