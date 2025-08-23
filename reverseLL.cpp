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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev= NULL;
        ListNode* curr= head;
        ListNode* next= NULL;
        while(curr != NULL){
            next= curr->next;
            curr->next=prev;
            prev= curr;
            curr= next;
        }
        return prev;
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
    vector<int> vals = {1, 2, 3, 4, 5};
    ListNode* head = createList(vals);

    cout << "Original List: ";
    printList(head);

    Solution sol;
    head = sol.reverseList(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}
