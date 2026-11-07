#include <bits/stdc++.h>
using namespace std;
struct bint{
	int l;
	long long num;
	bool bn[32];
};
bint a[200003];
bool lck[200003];
bool ck[200003];
void f(bint &x)
{
	int cnt = 0;int t = x.num;
	while(t) x.bn[cnt] = t&1,cnt++,t = t>>1;
	x.l=cnt;
	return ;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	if(n>m)
	{
		int maxl = -1;
		for(int i = 0;i<n;i++)
		{
			cin>>a[i].num,f(a[i]);
			if(a[i].l>maxl) maxl = a[i].l;
		}
  		int cnt = n;
		for(int i = maxl-1;i>=0;i--)
		{
			//cout<<"idx="<<i<<":"<<endl;
			//int lst = cnt;
			int ocnt = 0;
			for(int j = 0;j<n;j++) lck[j] = ck[j];
			for(int j = 0;j<n;j++)
			{
				if(ck[j]==0)
				{
					if(!(a[j].bn[i])) ck[j] = 1,cnt--;
					else ocnt++;
				}
				//cout<<a[j].bn[i]<<endl;
			}
			//cout<<ocnt<<endl;
			if(ocnt<m)
			{
				for(int j = 0;j<n;j++) ck[j] = lck[j];
			}
		}
		long long ans = 0;
		for(int j = 0;j<n;j++)
		{
			if(!(ck[j]))
			{
				if(ans == 0) ans = a[j].num;
				else ans = ans&(a[j].num);
			}
		}
		cout<<ans<<"\n";
	}
	else if(n==m)
	{
		for(int i = 0;i<n;i++)
		{
			cin>>a[i].num;
		}
		int ans = a[0].num;
		for(int i = 1;i<n;i++)
		{
			ans = (ans&(a[i].num));
		}
		cout<<ans<<"\n";
	}
	return 0;
}