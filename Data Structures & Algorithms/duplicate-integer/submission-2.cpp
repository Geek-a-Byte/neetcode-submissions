class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size()+1;
        map<int,int>count;
        for(auto i:nums)
        {
            count[i]++;
            if(count[i]>1)
            {
                return true;
            }
        }
        return false;
    }
};
