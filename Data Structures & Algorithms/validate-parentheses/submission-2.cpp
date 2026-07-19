class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto i:s)
        {
            if(i=='[' or i=='(' or i=='{')
            {
                st.push(i);
            }
            else 
            {
                char c='#';
                if(!st.empty()){
                    c = st.top();
                    st.pop();
                }
                if((i=='}' and c != '{') or (i==']' and c != '[') or (i==')' and c != '('))
                {
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
};
