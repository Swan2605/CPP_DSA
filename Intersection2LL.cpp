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
    int getLength(ListNode* head){
        int len=0;
        while(head !=  NULL){
            len++;
            head = head->next;

        }
        return len;
    }


    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        int l1 = getLength(h1);
        int l2 = getLength(h2);
        while(l1 >l2){
            l1--;
            h1= h1->next;
        }
        while(l2> l1){
            l2--;
            h2= h2->next;
        }
        while(h1 != h2){
            h1=h1->next;
            h2=h2->next;
        }
        return h1;
    }
};

int main() {
    // Example usage:

    // Create two linked lists that intersect
    // List A: 1 -> 2 \
    //                  -> 8 -> 9
    // List B:     3 -> 4 /

    ListNode* common = new ListNode(8);
    common->next = new ListNode(9);

    ListNode* headA = new ListNode(1);
    headA->next = new ListNode(2);
    headA->next->next = common;

    ListNode* headB = new ListNode(3);
    headB->next = new ListNode(4);
    headB->next->next = common;

    Solution sol;
    ListNode* intersection = sol.getIntersectionNode(headA, headB);

    if (intersection != NULL) {
        cout << "Intersection Node value: " << intersection->val << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    return 0;
}