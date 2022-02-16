#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

class maxheap
{
public:
    int size;
    int *h;
    int i = -1;
    maxheap(int s)
    {
        size = s;
        h = new int[size];
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << h[i] << " ";
        }
    }
    void swap(int &a, int &b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    void heapify(int j)
    {
        int parent = j;
        int s = i + 1;
        if (j < s)
        {
            int left = 2 * j + 1;
            int right = 2 * j + 2;
            if (left < s && right < s)
            {
                if (h[parent] < h[left] || h[parent] < h[right])
                {
                    if (h[left] < h[right])
                    {
                        swap(h[right], h[parent]);
                        heapify(right); //Recursively heapify the heap
                    }
                    else
                    {
                        swap(h[left], h[parent]);
                        heapify(left);
                    }
                }
            }
            // edge case if right element is greater than s
            if (left < s)
            {
                if (h[parent] < h[left])
                {
                    swap(h[left], h[parent]);
                    heapify(left);
                }
            }
        }
    }
    void pop()
    {
        swap(h[0], h[i]);
        i--;
        heapify(0); //heapify the root node
    }
    void push(int data)
    {
        i++;
        h[i] = data;
        int j = i;
        while (j != 0 && h[(j - 1) / 2] < data)
        {
            h[j] = h[(j - 1) / 2];
            j = (j - 1) / 2;
        }
        h[j] = data;
    }
};

void maxheaptominheap(int arr[], int size)
{
    int *h = new int[size];
    h = arr;
    int i = -1;
    while (i != size - 1)
    {
        i++;
        h[i] = arr[i];
        int j = i;
        while (j != 0 && h[(j - 1) / 2] > arr[i])
        {
            h[j] = h[(j - 1) / 2];
            j = (j - 1) / 2;
        }
        h[j] = arr[i];
    }
    arr = h;
}

int main()
{
    fastio;

    int n;
    cin >> n;
    maxheap h(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        h.push(temp);
    }
    h.print();
    cout << endl;
    int arr[9] = {13, 9, 11, 8, 4, 1, 10, 3, 5};
    maxheaptominheap(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }

    // cout << h.i;
    // h.pop();
    // h.pop();
    // h.print();

    return 0;
}