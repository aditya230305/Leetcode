class Solution {
public:
    Node* copyRandomList(Node* head) {

        if (!head) return nullptr;

        Node* curr = head;

        // Step 1: Inserting copy nodes
        while (curr) {
            Node* copy = new Node(curr->val);

            copy->next = curr->next;
            curr->next = copy;

            curr = copy->next;
        }

        // Step 2: Setting random pointers
        curr = head;

        while (curr) {
            if (curr->random) {
                curr->next->random = curr->random->next;
            }

            curr = curr->next->next;
        }

        // Step 3: Separating  the  lists
        Node* dummy = new Node(0);
        Node* copyCurr = dummy;

        curr = head;

        while (curr) {

            copyCurr->next = curr->next;
            copyCurr = copyCurr->next;

            curr->next = curr->next->next;
            curr = curr->next;

            if (copyCurr->next) {
                copyCurr->next = copyCurr->next->next;
            }
        }

        return dummy->next;
    }
};