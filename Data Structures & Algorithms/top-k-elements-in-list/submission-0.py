class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # 1. Count frequency
        freq = {}

        for i in nums:
            freq[i] = freq.get(i, 0) + 1

        # 2. Create buckets based on frequency
        # bucket[frequency] = list of numbers with that frequency
        buckets = defaultdict(list)

        # 3. Add numbers into buckets according to frequency
        for num, count in freq.items():
            # as we used defaultdict, we don't need to init buckets[count]
            buckets[count].append(num)

        # 4. Iterate buckets in reverse frequency order
        result = []

        for count in sorted(buckets.keys(), reverse=True):
            for num in buckets[count]:
                result.append(num)

                if len(result) == k:
                    return result

        return []
        