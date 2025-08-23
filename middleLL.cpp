#include <iostream>
#include <vector>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow= head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast= fast->next->next;
        }
        return slow;
        
    }
};
// Helper function to print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create linked list from vector
ListNode* createList(vector<int> vals) {
    if (vals.empty()) return NULL;
    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    for (int i = 1; i < vals.size(); i++) {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    // Example: create list 1->2->3->4->5
    vector<int> vals = {1, 2, 3, 4, 5,6};
    ListNode* head = createList(vals);

    cout << "Original List: ";
    printList(head);

    Solution sol;
    head = sol.middleNode(head);

    cout << "Middle node: "<<head->val;

    return 0;
}
