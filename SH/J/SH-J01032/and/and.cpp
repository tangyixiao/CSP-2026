#include <bits/stdc++.h> 
using namespace std;
int shu[200005];
int main()  
{   
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
	cin >> n >> m;
	for (int i = 1;i<= n;i++)
	{
		cin >>shu[i];
	}
    if(m == 1) 
    {   
        sort(shu+1,shu+n+1);
    	cout << shu[n];
    	return 0;
	}
	if(m == n)
	{
		int ans = shu[1];
		for (int i = 2;i<=n;i++ )
		{
			ans = (ans&shu[i]);
		}
		cout << ans;
		return 0;
	}
	bool flag = true;
	for(int i = 2;i<= n;i++)
	{
		if (shu[i] - shu[i-1]!= 1)
		{
			flag = false;
			break;
		}
	}
	if (flag == true)
	{
		cout << n-m;
		return 0;
	}
	sort(shu+1,shu+n+1);
	if (shu[n] <= 4)
	{
		int vis[4];
		for (int i = 1;i<= n;i++)
		{
			vis[shu[i]]++;
		}
		if (m<= vis[3])
		{
			cout << 3;
		}
		else if (m<= vis[3]+vis[2])
		{
			cout << 2;
		}
		else if ( m <= vis[3]+vis[2]+vis[1])
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
		return 0;
	}
	cout << shu[n-m+1];
    return 0;
}
