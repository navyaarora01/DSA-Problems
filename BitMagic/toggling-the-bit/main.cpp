#include <iostream>
#include <stdio.h>
using namespace std;
int togglebit(int n, int k)
{
    return (1 ^ (n >> (k - 1)));
}
int main()
{
int n;
int k;
    cin >> n >> k;
    cout << togglebit(n, k) << endl;
}
