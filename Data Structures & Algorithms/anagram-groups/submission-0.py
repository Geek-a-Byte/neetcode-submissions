class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        found = {}

        for word in strs:
            count_char = Counter(word)
            # as Counter() cannot be stored as keys in dictionary, we need to convert them to tuples
            key = tuple(sorted(count_char.items()))

            if key in found:
                found[key].append(word)
            else:
                found[key] = [word]

        return list(found.values())
        