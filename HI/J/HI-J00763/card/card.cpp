#include <bits/stdc++.h>
using namespace std;
long long n,m,a[100005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i ++)
	{
		cin >> a[i];
	}
	//入队，出队，但我忘了
	for(int i = 1;i <= m;i++)
	{
		cout << a[i];
	} 
	return 0;
}
