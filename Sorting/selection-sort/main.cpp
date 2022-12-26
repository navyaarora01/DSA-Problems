#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        int min_index=i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min_index])
            {
                // int temp = array[j];
                // array[j] = array[i];  gsutil cp gs://qwiklabs-gcp-02-b920438484df/*.svg .
                // array[i] = temp;
                min_index = j;
            }
            swap(array[i] , array[min_index]);
        }
    }  
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
//not stable
//O(n^2) tc