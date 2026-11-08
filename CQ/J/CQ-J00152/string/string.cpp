#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n;
int a[N];
char c[N];
int ans;
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr); 
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>a[i]>>c[i];
	int lin=1, rin=n;
	while(lin<rin)
	{
		if(c[lin]!=c[rin]) ans+=min(a[lin], a[rin]);
		if(a[lin]==a[rin]) a[lin]=0, a[rin]=0, lin++, rin--;
		else if(a[lin]>a[rin]) a[lin]-=a[rin], a[rin]=0, rin--;
		else a[rin]-=a[lin], a[lin]=0, lin++;
	}
	cout<<ans;
	return 0;
}
