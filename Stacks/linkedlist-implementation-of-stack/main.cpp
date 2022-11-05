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

struct MyStack()
{
    Node *head;
    int size;
    MyStack()
    {
        head = NULL;
        size = 0;

        void push(int x)
        {
            Node *temp = new Node(x);
            temp->next = head;
            head = temp;
            size++;
        }

        int pop()
        {
            if (head == NULL)
            {
                return INT_MAX;
            }
            int res = head->data;
            Node *temp = head;
            head = head->next;
            delete temp;
            size--;
            return res;
        }

        int Size()
        {
            return size;
        }

        bool isEmpty()
        {
            return (size == 0);
        }

        int peek()
        {
            if (head == NULL)
            {
                return INT_MAX;
            }
            return (head->data);
        }
    }
};
// Time complexity of each function in MyStack class is O(1)

// we need to choose an end in stack from which we can push and pop  the items into it.
// if we choose end then we only have head ...so an extra pointer is needed to me maintained and tc wont be O(1)
// otherwise we always choose head as here tc for each function is always O(1)