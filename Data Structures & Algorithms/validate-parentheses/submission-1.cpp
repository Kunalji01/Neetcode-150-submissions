class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<int> st;

        for(int i = 0; i<n;i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);

            if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if(st.size() == 0) return false;
                if((s[i] == ')' && st.top() == '(') 
                   || (s[i] == ']' && st.top() == '[')  
                   || (s[i] == '}' && st.top() == '{'))
                    st.pop();

                else  return false;
            }
        }

        return st.size() == 0;
        
    }
};
