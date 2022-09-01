class Solution:
    def countConsistentStrings(self, allowed: str, words: list[str]) -> int:
        consistent = 0
        for word in words:
            count = 0
            for char in word:
                if char in allowed:
                    count += 1
                else:
                    count = 0;
                    break
            if count>0:
                consistent += 1
            
        return consistent
