class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        word = ''
        words = []
        for char in s:
            if char != ' ':
                word += char
            else:
                words.append(word)
                word = ''
        words.append(word)

        truncate = ' '.join(words[0:k])
        return truncate
