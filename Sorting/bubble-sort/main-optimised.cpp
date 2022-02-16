#include <iostream>
using namespace std;
void bubbleSort(int arr[] , int n){
    bool swapped = false;
    int iteration = 1;
    while(iteration<n){
        for(int i=0;i<(n-iteration);i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
        iteration++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Elements of sorted array are: "<<endl;
    bubbleSort(arr , n);
    return 0;
}
// Here this algorithm works linear work and optimises the solution
// it states that if array is already sorted it wont take O(n^2) of time in each case