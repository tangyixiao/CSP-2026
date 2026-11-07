#include <iostream>
#include <string>
using namespace std;

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n , cnt = 0;
    cin >> n;
    char a[n+5];
    int b[n+5];
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i] >> a[i];
    }

    for(int  i = 1; i <= n / 2; i++)
    {
        if(a[i] != a[n-i+1]){
            cnt += min(b[i], b[n-i+1]);
        }

    }
    cout << cnt;
    return 0;
}
