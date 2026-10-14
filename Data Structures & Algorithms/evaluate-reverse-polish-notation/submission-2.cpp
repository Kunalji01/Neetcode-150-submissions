class Solution {
public:

    int calculate(int a, int b, char op) {
        switch (op) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/': return a / b;
                
        }
        return 0;
    }

    int evalRPN(vector<string>& s) {
        int n = s.size();

        stack<int> st;
        for(int i = 0; i<n;i++){
            if(s[i] == "+" ||
               s[i] == "-" ||
               s[i] == "*" ||
               s[i] == "/" ){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int p = calculate(b,a,s[i][0]);

                st.push(p);
               }

            else{
                int top = stoi(s[i]);
                st.push(top);
            }
            
        }

        return st.top();
        
    }
};
