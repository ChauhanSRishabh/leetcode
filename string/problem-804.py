class Solution:
    def uniqueMorseRepresentations(self, words: list[str]) -> int:
        morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        alphabets = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

        morse_dict = {alphabets[i]: morse[i] for i in range(len(alphabets))}
        morse_codes = []
        for word in words:
            morse_code = ''
            for i in range(len(word)):
                morse_code += morse_dict[word[i]]
            morse_codes.append(morse_code)
        
        print(morse_codes)
        codes = set()

        for code in morse_codes:
            if code not in codes:
                codes.add(code)
            else:
                continue    

        return len(codes)
