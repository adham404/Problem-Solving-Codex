class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        totalFrequency = defaultdict(list)
        for s in strs:
            count = [0] *26
            for j in s:
                count[ord(j)-ord('a')] += 1
            totalFrequency[tuple(count)].append(s)
        return totalFrequency.values()