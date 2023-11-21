// Leetcode

// Convert Binary Number in a Linked List to Integer

// Problem: Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number. Return the decimal value of the number in the linked list.

// Example 1:
// Input: head = [1,0,1]
// Output: 5
// Explanation: (101) in base 2 = (5) in base 10

int getDecimalValue(ListNode *head)
{
    int res = 0;
    while (head != NULL)
    {
        res = 2 * res + head->val;
        head = head->next;
    }
    return res;
}
