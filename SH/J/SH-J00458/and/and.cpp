#include<bits/stdc++.h>
using namespace std;

vector<long long> a[31], ans;
bool s[200005][31], d[200005];
long long e[200005];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=n; i++)
	{
		cin>>e[i];
		int j=1;
		long long k=e[i];
		while(k)
		{
			//cout<<(k&1);
			if(k&1)
			{
				a[j].push_back(i);
				s[i][j]=true;
			}
			k/=2;
			j++;
		}
		//cout<<endl;
	}
	int i;
	for(i=30; i>=1; i--)
	{
		if(a[i].size()<m) continue;
		for(auto cur:a[i])
		{
			ans.push_back(cur);
			//cout<<ans[ans.size()-1];
		}
		break;
	}
	int num=ans.size();
	//cout<<"num: "<<num<<endl;
	while(num>m && i>1)
	{
		i--;
		int cnt=0;
		for(auto cur:ans)
		{
			if(s[cur][i]==1 && d[cur]==0)cnt++;
		}
		if(cnt<m)continue;
		for(auto cur:ans)
		{
			if(s[cur][i]==0 && d[cur]==0)
			{
				d[cur]=1;
				num--;
				if(num==m)break;
			}
		}
	}
	long long anss=(1LL<<32)-1, aw=0; 
	//cout<<anss<<endl;
	for(auto cur:ans)
	{
		if(d[cur]==0)
		{
			//cout<<"awa\n";
			anss&=e[cur];
			aw++;
		}
		if(aw==m)break;
	}
	cout<<anss;
	return 0;
}
