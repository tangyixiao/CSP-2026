#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("and.in" , "r" , stdin);
    freopen("and.out" , "w" , stdout);
    int n , m , cnt = 0 , a[10005];
    cin >> n >> m;
    int x;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
    }
    for(int i = 1; i <= x; i++)
    {
    	cin >> a[x] ;
	}
    for(int i = 1; i <= m; i++)
    {
        cnt = a[i] & a[i + 1];
    }
    for(int i = 1; i <= m; i++)
    {
    	if(cnt < a[i] & a[i + 1])
		{
			cnt = a[i] & a[i + 1];
		}
	}
    cout << cnt;
}
