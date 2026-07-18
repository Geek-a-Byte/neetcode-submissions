class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        int len = j;

        for(int k=0;k<=len/2;k++)
        {
            //cout<<i<<" "<<j<<" "<<s[k]<<endl;
            if(!(s[j]>=65 and s[j]<=90) and !(s[j]>=97 and s[j]<=122) and !(s[j]>='0' and s[j]<='9'))
            {
                j--;
                continue;
            }
            if(!(s[i]>=65 and s[i]<=90) and !(s[i]>=97 and s[i]<=122) and !(s[i]>='0' and s[i]<='9'))
            {
                i++;
                continue;
            }
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
