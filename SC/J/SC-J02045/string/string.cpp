#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e8*9;
char c[N],cl[N];
int sl=1;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		char s;
		cin >> n >> s;
		for(int i=sl;i<=sl+n-1;i++)
		{
			c[i]=s;
		}
		sl+=n; 
	}
	for(int i=sl-1;i>=1;i--)
	{
		cl[sl-i]=c[i];
	}
//	for(int i=1;i<=sl;i++)
//	{
//		cout << c[i] << " ";
//	}
//	cout << endl;
//	for(int i=1;i<=sl;i++)
//	{
//		cout << cl[i] << " ";
//	}
	int cnt=0;
	for(int i=1;i<=sl;i++)
	{
		if(c[i]!=cl[i])
		{
			cnt++;
		}
	}
	cout << cnt/2;

	return 0;
}
