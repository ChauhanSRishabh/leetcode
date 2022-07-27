class Solution {
public:
    void deleteNode(ListNode* node) {
        // copy the value of next node into this node
        // link this node with next to next node
        // we are therefore making our node the next node and then skipping the next node
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
