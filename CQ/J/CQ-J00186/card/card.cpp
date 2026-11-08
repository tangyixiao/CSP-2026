#include <iostream>
#include <cstring>
using namespace std;
int a[100010],b[100010],c[100010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i ++)
	{
		cin >> a[i];
	}
	for(int i = 1 ; i <= n ; i ++)
	{
		memset(b,0,sizeof(b));
		int cur = 0;
		for(int j = i ; j <= n ; j ++)
		{
			for(int k = 1 ; k <= cur ; k ++)
			{
				if(b[k] == a[j])
				{
					cur = k - 1;
					break;
				}
			}
			cur ++;
			b[cur] = j;
		}
		for(int j = 1 ; j <= cur ; j ++)
		{
			c[b[j]] ++;
		}
	}
	for(int i = 1 ; i <= m ; i ++)
	{
		cout << c[i] << " ";
	}
	cout << endl;
	return 0;	
}
