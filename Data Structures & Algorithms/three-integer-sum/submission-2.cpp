class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& numbers) {

        sort(numbers.begin(),numbers.end());
        int len = numbers.size();

        vector<vector<int>>ans;
        for(int k=0;k<len;k++)
        {
            if(k>0 and numbers[k] == numbers[k-1]) continue; // we don't want to keep same value as first item in the next iteration, see https://www.youtube.com/watch?v=jzZsG8n2R9A for more context
            
            int target = 0;
            int i = k+1;
            int j = len - 1;
            
            while(i<j)
            {
                if(numbers[i]+numbers[j]+numbers[k]>target)
                {
                    j--;
                }
                else if(numbers[i]+numbers[j]+numbers[k]<target)
                {
                    i++;
                }
                else 
                {
                    // cout<<k<<" "<<i<<" "<<j<<endl;
                    ans.push_back({numbers[k], numbers[i],numbers[j]});
                    i++;
                    while(numbers[i]==numbers[i-1] and i<j)
                    {
                        i++;
                    }
                }
            }
        }
        return ans;  
    }
};