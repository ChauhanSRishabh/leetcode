/* PROBLEM STATEMENT
Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period "." with "[.]".

Example:
Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
*/

class Solution {
public:
    string defangIPaddr(string address) {
        string defanged;
        for(int i=0; i<address.size();i++)
        {
            if(address[i] == '.')
            {
                defanged += "[.]";
            }   
            else
            {
                defanged += address[i];
            }
        }
        return defanged;      
    }
};
