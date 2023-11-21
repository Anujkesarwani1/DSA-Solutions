// Coding Ninjas

// Convert Array to Linked List

// Example: 
// Input: Arr = [4, 2, 5, 1]
// Output: 4->2->5->1

Node *constructLL(vector<int> &arr)
{
    if (arr.size() == 0)
        return NULL;
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i]);
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}
