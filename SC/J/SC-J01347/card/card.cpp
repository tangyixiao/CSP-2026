#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[500005],cnt[300005];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int f=1;f<=n;f++)
	{
		string s="";
		int s_size=s.size();
		for(int i=f;i<=n;i++)
		{
			for(int j=0;j<s.size();j++)
			{
				if(s[j]-'0'==a[i])
				{
//					cout<<"111";
					string ss="";
					for(int k=0;k<j;k++) ss+=s[k];
					s=ss;
					break;
				}
			}
			s+=a[i]+'0';
		}
		for(int i=0;i<s.size();i++)
		{
			cnt[s[i]-'0']++;
		}
//		for(int i=1;i<=n;i++) cout<<s[i]-'0'<<' ';
//		cout<<'\n';
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
	return 0;
 }