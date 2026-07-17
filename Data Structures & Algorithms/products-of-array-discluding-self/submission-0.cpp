class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>res;
        int prefix = 1;
        for(auto it=nums.begin();it!=nums.end();++it)
        {
            res.push_back(prefix);       
            prefix = prefix * (*it);
        }
        int ind = nums.size()-1;
        int postfix = 1;
        for(auto it=res.rbegin();it!=res.rend();++it)
        {
            *it=*it*postfix;
            postfix=nums[ind--]*postfix;
        }
        return res;
    }
};
