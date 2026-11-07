#include <bits/stdc++.h>
using namespace std;
long long at,cnt=0;
int fan[100005],ci[100005];
vector<int> shu;
string s,fs;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	if (n<=2005)
	{
		for (int i=1;i<=n;i++)
		{
			cin>>at>>s[i];
			for (int j=1;j<=at;j++)
			{
				shu.push_back(s[i]-'a');
			}
		}
		for (int i=1;i<=shu.size()/2;i++)
		{
			//fan[i]=shu[shu.size()-i];
			if (shu[shu.size()-i]!=shu[i-1]) cnt++;
		}
		cout<<cnt;
	}
	else
	{
		for (int i=1;i<=n/2;i++)
		{
			cin>>ci[i]>>s[i];	
		}
		for (int i=n/2+1;i<=n;i++)
		{
			cin>>fan[n-i+1]>>fs[n-i+1];	
		}
		for (int i=1;i<=n/2;i++)
		{
			if (fs[i]-'a'!=s[i]-'a')
				cnt+=fan[i];
			else cnt+=fan[i]-ci[i];
		}
	}
	return 0;
}
