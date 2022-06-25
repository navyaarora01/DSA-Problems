#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " -> ";
        curr = curr->next;
    }
}
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Node *mergeTwoLists(Node *l1, Node *l2)
{
    Node *head = new Node(0);
    Node *temp = head;
    while (l1 && l2)
    {
        if (l1->data < l2->data)
        {
            temp->next = new Node(l1->data);
            temp = temp->next;
            l1 = l1->next;
        }
        else
        {
            temp->next = new Node(l2->data);
            temp = temp->next;
            l2 = l2->next;
        }
    }
    while (l1 != NULL)
    {
        temp->next = new Node(l1->data);
        temp = temp->next;
        l1 = l1->next;
    }
    while (l2 != NULL)
    {
        temp->next = new Node(l2->data);
        temp = temp->next;
        l2 = l2->next;
    }
    return head->next;
}

int main()
{
    // For LL1
    Node *head1 = NULL;
    int n1, value1;
    cout << "Enter the length of linked list 1" << endl;
    cin >> n1;
    cout << "Insert the value of nodes: " << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> value1;
        head1 = insertEnd(head1, value1);
    }
    // cout << "Given linked list 1 is: " << endl;
    // printList(head1);
    cout << endl;
    // For LL2
    Node *head2 = NULL;
    int n2, value2;
    cout << "Enter the length of linked list 2" << endl;
    cin >> n2;
    cout << "Insert the value of nodes: " << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> value2;
        head2 = insertEnd(head2, value2);
    }
    // cout << "Given linked list 2 is: " << endl;
    // printList(head2);
    cout << endl;
// sorted linked list
    cout << "The sorted and merged linked list is given below :" << endl;
    Node *head = mergeTwoLists(head1, head2);
    printList(head);
    return 0;
}
