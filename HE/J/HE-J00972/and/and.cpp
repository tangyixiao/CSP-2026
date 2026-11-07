#include <iostream>
using namespace std;
int main()
{
    freopen("and.in","r","std.in");
    freopen("and.out","w","std.out");
    int n,m,a[100];
    cin >> n >> m;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    cout << m;
    return 0;
}
