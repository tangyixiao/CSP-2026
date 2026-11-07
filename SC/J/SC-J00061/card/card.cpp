#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int> 
#define endl '\n'
int a[5000],ans[5000];
vector <int>now;
void go(int x)
{
	bool bol=0;
	int cnt=-1;
	for(int i=0;i<now.size();i++)
	{
		if(now[i]==x) bol=1,cnt=i;
	}
	if(bol==0) now.push_back(x);
	else 
	{
//		cout<<cnt<<" ";
		int s=now.size();
		for(int i=cnt;i<s;i++)
		{
			now.pop_back();
		}
//		cout<<s<<endl;
		now.push_back(x);
	}
}
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int tot=1;
	for(int i=1;i<=n;i++){
		now.clear();
		for(int j=i;j<=n;j++)
		{
			go(a[j]);
		}
		for(int j=0;j<now.size();j++)
		{
//			cout<<i<<":"<<now[j]<<" ";
			ans[now[j]]++;
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}