// FIND EVEN ODD SUM 
#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void addAtEnd(Node* &head, int val) {
    Node* n = new Node();
    n -> data = val;
    n -> next = NULL;

    if(head == NULL) {
        head = n;
        return;
    }
    
    Node* temp = head;
    while (temp -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = n;
}

void evenOddSum(Node* &head) {
    int oddSum = 0, evenSum = 0;
    Node* temp = head;
    while (temp != NULL) {
        if ((temp -> data) % 2 == 0)
            evenSum += temp -> data;
        else
            oddSum += temp -> data;
        temp = temp -> next;
    }
    cout << evenSum << "\n" << oddSum;
}

int main()
{
    Node* head = NULL;   
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        addAtEnd(head,a);
    }
    evenOddSum(head);
    return 0;
}