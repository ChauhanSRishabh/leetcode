// Traverse the list with 2 pointers traverse and middle. 
// Make traverse move twice as fast vis-a-vis middle. 
// When traverse reaches the end, middle will be at our desired node.


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* traverse = head;
        ListNode* middle = head;
        while(traverse != NULL && traverse->next != NULL) //only move it forward when it can
        {
            traverse = traverse->next->next;
            middle = middle->next;
        }
        return middle;
    }
};
