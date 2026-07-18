class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        int len = j;

        for(int k=0;k<len;k++)
        {
            cout<<i<<" "<<j<<" "<<s[i]<<" "<<s[j]<<endl;
            int f=1; //alphanumeric flag
            if(!(s[i]>=65 and s[i]<=90) and !(s[i]>=97 and s[i]<=122) and !(s[i]>='0' and s[i]<='9'))
            {
                i++;
                f=0;
            }
            if(!(s[j]>=65 and s[j]<=90) and !(s[j]>=97 and s[j]<=122) and !(s[j]>='0' and s[j]<='9'))
            {
                j--; 
                f=0;
            }
            if(f==0) continue;
            if(tolower(s[i])==tolower(s[j]))
            {
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
};
