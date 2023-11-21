// Coding Ninjas

// Search in a Linked List

// Input: 3 6 4 2 -1 7 9,  target = 1
// Output: true

int searchInLinkedList(Node<int> *head, int k)
{
    if (head == NULL)
        return 0;
    if (head->data == k)
        return 1;
    return searchInLinkedList(head->next, k);
}
