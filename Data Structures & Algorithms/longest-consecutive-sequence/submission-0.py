class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return 1
        if len(nums) == 0:
            return 0

        nums_set = set(nums)

        seq_lens = []
        prev_elem = 0
        loop_counter = 0
        seq_len = 0

        for i in sorted(nums_set):
            if loop_counter == 0:
                seq_len = 1

            elif loop_counter < len(nums_set):
                if i != prev_elem + 1:
                    seq_lens.append(seq_len)
                    seq_len = 1

                if i == prev_elem + 1:
                    seq_len += 1

            loop_counter += 1

            if loop_counter == len(nums_set):
                if i == prev_elem + 1:
                    seq_lens.append(seq_len)
                else:
                    seq_lens.append(1)

            prev_elem = i

        seq_lens.sort(reverse=True)

        return seq_lens[0]