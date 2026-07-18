class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        int len = j;

        for(int k=0;k<len;k++)
        {
            if(numbers[i]+numbers[j]>target)
            {
                j--;
            }
            else if(numbers[i]+numbers[j]<target)
            {
                i++;
            }
            else if(numbers[i]+numbers[j]==target)
            {
                break;
            }
        }
        return {i+1,j+1};
    }
};
