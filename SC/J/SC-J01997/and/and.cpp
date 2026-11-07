#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 2 * 1e5 + 5;

long long n,m,a[MAX],l = 1 << 30,mans = 0,flag = 0;
bool vis[2 * MAX];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin >> n >> m;
	for(int i = 1;i <= n;++i)	cin >> a[i];
	
	for(int i = 1;i <= 2 * n + 2;++i)	vis[i] = 1;
	
	while(l){
		int cnt = 0,ans = 0;
		
		for(int i = 1;i <= n;++i)
			if((a[i] & l) && vis[2 * i + flag]){
				++cnt;
				if(ans)	ans &= a[i];
				else	ans = a[i];
			}else	vis[2 * i + flag] = 0;
				
		if(cnt == m){ cout << ans;return 0; }
		if(cnt > m){ mans += l; }
		if(cnt < m){ flag = !flag; }
		
		for(int i = 1;i <= n;++i)	vis[2 * i + !flag] = vis[2 * i + flag];
		
		l >>= 1;
	}
	
	cout << mans;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}