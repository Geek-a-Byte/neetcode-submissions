class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(auto i:tokens)
        {
            if(i!="+" and i!="-" and i!="*" and i!="/") s.push(stoi(i));
            else
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                //cout<<a<<" "<<b<<endl;
                if(i=="+")
                {
                    s.push(a+b);
                }
                if(i=="-")
                {
                    s.push(b-a);
                }
                if(i=="*")
                {
                    s.push(a*b);
                }
                if(i=="/")
                {
                    s.push(b/a);
                }
            }
        }
        return s.top();
    }
};
