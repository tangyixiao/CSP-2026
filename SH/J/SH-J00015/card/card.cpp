#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int a[N],cnt[M];
bool flag[M];
stack<int> st;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	int n,m;
	cin>>n>>m;
	bool fA=true;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		if(a[i]<a[i-1]) fA=false;
	}
	if(m<=2)
	{
		if(m==1) cout<<n;
		else
		{
			if(a[n]==1)
			{
				cout<<n<<' ';
				int t=0;
				for(int i=1;i<=n;++i)
				{
					if(a[i]==2) ++t;
				}
				cout<<t;
			}
			else
			{
				int t=0;
				for(int i=1;i<=n;++i)
				{
					if(a[i]==1) ++t;
				}
				cout<<t<<' '<<n;
			}
		}
	}
	else if(n<=500)
	{
		for(int p=1;p<=n;++p)
		{
			for(int i=p;i<=n;++i)
			{
				if(!flag[a[i]])
				{
					st.push(a[i]);
					flag[a[i]]=true;
				}
				else
				{
					while(st.top()!=a[i])
					{
						flag[st.top()]=false;
						st.pop();
					}
				}
			}
			while(!st.empty())
			{
				++cnt[st.top()];
				flag[st.top()]=false;
				st.pop();
			}
		}
		for(int i=1;i<=m;++i) cout<<cnt[i]<<' ';
	}
	else if(fA)
	{
		for(int i=n;i>=1;--i)
		{
			if(cnt[a[i]]==0) cnt[a[i]]=i;
		}
		for(int i=1;i<=m;++i) cout<<cnt[i]<<' ';
	}
	else
	{
		for(int i=1;i<=m;++i) cout<<n<<' ';
	}
	return 0;
}//48
