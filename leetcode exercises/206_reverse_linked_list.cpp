class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;//temporarily store linked list in reverse
        ListNode* tail = nullptr;// reversed linked list head
        //while new nodes discovered, store node values in vector
        while(head!= nullptr) {
            a.push_back(head->val);
            head = head->next;
        }
        //make reversed linked list
        for(int i = 0; i < a.size(); i++ ) {
            tail = new ListNode(a[i], tail);
        }
        return tail; 
    }
};