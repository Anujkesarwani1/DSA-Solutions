// Coding Ninjas

// Example:
// Input: 4 -> 2 -> 5 -> 1 -> -1 -> 6
// Output: 6

int length(Node *head)
{
    int size = 0;
    while (head)
    {
        size++;
        head = head->next;
    }
    return size;
}
