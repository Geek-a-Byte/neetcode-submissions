class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a,b,flag=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target and i!=j)
                {
                    a=i;
                    b=j;
                    flag=1;
                    break;
                }
            }
            if(flag) break;
        }
        return {a,b};
    }
};
