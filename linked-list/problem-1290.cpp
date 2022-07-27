/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 
 // SUBMISSION 1
 
class Solution {
public:
    unsigned int getDecimalValue(ListNode* head) {
        ListNode* traverse = head;
        unsigned int num=0, inter=0;
        int y=0, arr[30], i=0;
        while(traverse!=NULL){
            arr[i]=traverse->val;
            i++;
            traverse = traverse->next;
        }
        int len = i;
        for(int i=len-1; i>=0; i--)
        {
            inter = pow(2,y);
            num += arr[i]*inter;
            y++;
        }
        return num; 
    }
};
