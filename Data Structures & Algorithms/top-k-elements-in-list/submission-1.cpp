class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 1. count frequency
        unordered_map<int,int>freq;
        for(auto i:nums)
        {
            freq[i]++;
        }

        // 2. init buckets - each bucket index will indicate the frequency count in nums
        // bucket 1 = will contain numbers appearing once
        // bucket 2 = will contain numbers appearing twice
        // remember to use map here, cause we need to iterate this in reverse sorted manner
        map<int, vector<int>>buckets; 

        // 3. now add the numbers in the buckets according to frequency
        for(auto i:freq)
        {
            buckets[i.second].push_back(i.first);
        }
        

        // 4. then loop over the buckets in reverse manner and 
        // add the numbers in the result array which appeared more than or equal to k times.
        vector<int>result;
        int bucket_size = buckets.size();
        for(auto it = buckets.rbegin(); it != buckets.rend(); it++)
        {
            for(auto j:it->second)
            {
                result.push_back(j);
                if(result.size()==k) return result;
            }
        }
        return {};
    }
};
