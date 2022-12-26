#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x)
{
    if (x == 0 || x == 1)
        return x;
    int s = 0;
    int e = x;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mid == x / mid)
        {
            return mid;
        }
        else if (mid < x / mid)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int tempans = mySqrt(n);
    cout<<tempans<<endl;
    double ans = morePrecision(n, 3, tempans);
    cout << ans << endl;
}