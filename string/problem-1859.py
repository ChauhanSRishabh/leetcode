class Solution:
    def sortSentence(self, s: str) -> str:
        list_words = []
        word = ''
        for i in range(len(s)):
            if s[i] != ' ':
                word += s[i]
            elif s[i] == ' ':
                list_words.append(word)
                word = ''
        list_words.append(word)
        # print(list_words)

        sorted_list=[None]*len(list_words)
        for word in list_words:
            index = int(word[-1])
            sorted_list[index-1] = word[:-1]       
        # print(sorted_list)

        sentence = ''
        for word in sorted_list:
            sentence += word + ' '
        
        return(sentence[:-1])
