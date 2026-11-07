#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    long long n, m;
    cin >> n >> m;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    sort(arr.begin(), arr.end(), greater<long long>());

    long long res = arr[0];
    for(long long i = 1; i < m; i++)
    {
        res = res & arr[i];

    }

    cout << res << endl;
    return 0;
}
