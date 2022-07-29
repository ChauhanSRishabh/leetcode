/*
PROBLEM STATEMENT

You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.

Example 1:
Input: command = "G()()()()(al)"
Output: "Gooooal"

Example 2:
Input: command = "(al)G(al)()()G"
Output: "alGalooG"
*/

class Solution {
public:
    string interpret(string command) {
        string parser;
        for(int i =0; i<command.size(); i++)
        {
            if(command[i] == 'G')
                parser += command[i];
            if(command[i]=='(' && command[i+1] == ')')
            {
                parser += 'o';
                i++;
            }
            if(command[i] == '(' && command[i+1] == 'a')
            {
                parser += "al";
                i += 3;
            }
        }
        return parser;
    }
};
