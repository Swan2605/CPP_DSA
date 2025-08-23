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
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        if(h1 ==NULL || h2 == NULL){
            return h1==NULL? h2: h1;
        }
            if(h1->val <= h2-> val){
                h1 ->next = mergeTwoLists(h1->next, h2);
                return h1;
            }
            else{
                h2 ->next = mergeTwoLists(h1, h2->next);
                return h2;
            }

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
    vector<int> vals = {1,2,4};
    ListNode* head1 = createList(vals);
    vector<int> vals2 = {1,3,4};
    ListNode* head2 = createList(vals2);


    Solution sol;
    ListNode* MergedHead = sol.mergeTwoLists(head1, head2);

    cout << "Merge list:";
    printList(MergedHead);

    return 0;
}
