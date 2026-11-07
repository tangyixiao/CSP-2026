#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int have[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans = 0;
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> have[i];
	for(int i = 29;i >= 0;i--)
	{
		int now = 0;
		for(int j = 1;j <= n;j++) if(have[j] & (1 << i)) now++;
		if(now >= m)
		{
			ans += (1 << i);
			now = 0;
			for(int j = 1;j <= n;j++) if(have[j] & (1 << i)) have[++now] = have[j];
			n = now;
		}
	}
	cout << ans << endl;
	fclose(stdin);
	fclose(stdout);
	return 0; 
}
