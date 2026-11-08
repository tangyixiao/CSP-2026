#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
const int M = 3e5+5;
int n, m;
int a[N], ans[N], b[M][2];
int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    cin >> n >> m;
    for (int i = 1 ; i <= n ; i ++) cin >> a[i];
    if (m == 2)
    {
		if (a[n]==1)
		{
			ans[1] = n;
			for (int i = 1 ; i <= n ; i ++) if (a[i] == 2) ans[2] ++;
		}
		else
		{
			ans[2] = n;
			for (int i = 1 ; i <= n ; i ++) if (a[i] == 1) ans[1] ++;
		}
	}
	else
	{
		for (int i = 1 ; i <= n ; i ++)
        {
    	for (int j = 1 ; j <= m ; j ++)
			{
				b[j][0] = 0; b[j][1] = 0;
			}
    		for (int j = i ; j <= n ; j ++)
    		{
    			b[a[j]][0] ++;
    			if (b[a[j]][0] == 1) b[a[j]][1] = j;
    			else 
 		   		{
    				for (int k = b[a[j]][1] ; k < j ; k ++)
					{
						if (b[a[k]][0]) b[a[k]][0] --;
					}
					b[a[j]][i] = j;
				}
			}
			for (int j = 1 ; j <= m ; j ++)
			{
				if (b[j][0]) ans[j] ++;
			}
		}
	}
	for (int i = 1 ; i <= m ; i ++) cout << ans[i] << " ";
	return 0;
}
