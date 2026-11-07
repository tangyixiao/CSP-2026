#include <bits/stdc++.h>

using namespace std;

const int N = 5e5 + 9;
const int M = 3e5 + 9;

int vis[M];
int arr[N];
int n, m;

signed main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	scanf("%d %d", &n, &m);
	
	for(int i = 1; i <= n; i ++) scanf("%d", &arr[i]);
	
	for(int i = 1; i <= n; i ++)
	{
		string s = "";
		for(int j = i; j <= n; j ++)
		{
			for(int k = 0; k <= n; k ++)
			{
				if(s[k] == (arr[j] + '0'))
				{
					string t = s.substr(0, k );
					s = t;
					
					break;
				}
			}
			
			s += (arr[j] + '0');
			
//			cout << s << ' ';	
		}
		
		for(int j = 0; j < s.size(); j ++)
		{
			vis[s[j] - '0'] ++;
		}
	}
	
	for(int i = 1; i <= m; i ++) cout << vis[i] << ' '; 
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
