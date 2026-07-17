class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==1) return 1;
        if(nums.size()==0) return 0;
        set<int>_nums;
        for(auto i:nums)
        {
            _nums.insert(i);
        }
        vector<int>seq_lens;
        int prev_elem;
        int loop_counter = 0;
        int seq_len;
        for(auto i:_nums)
        {
            if(loop_counter==0) 
            {
                seq_len = 1; 
            }
            else if(loop_counter<_nums.size())
            {
                if(i!=prev_elem+1)
                {
                    seq_lens.push_back(seq_len);       
                    seq_len = 1;
                }
                if(i==prev_elem+1)
                {
                    seq_len++;
                }
                
            }
            loop_counter++;
            if(loop_counter == _nums.size())
            {
                if(i==prev_elem+1)
                { 
                    seq_lens.push_back(seq_len);
                }
                else
                {
                    seq_lens.push_back(1);
                }
            }
            prev_elem = i;
        }
        sort(seq_lens.begin(), seq_lens.end(), std::greater<>());
        return seq_lens[0];
    }
};
