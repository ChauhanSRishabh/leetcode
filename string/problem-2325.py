class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        key_char = []
        for i in range(len(key)):
            if key[i] not in key_char and key[i] != ' ':
                key_char.append(key[i])
            else:
                continue        
        # print(key_char)
        
        alphabets = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
        
        decode_dict = {key_char[i]: alphabets[i] for i in range(len(alphabets))}
        # print(decode_dict)
        
        decode_msg = ''

        for i in range(len(message)):
            if message[i] != ' ':
                decode_msg += decode_dict[message[i]]
            else:
                decode_msg += ' '

        return decode_msg
