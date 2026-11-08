#include<bits/stdc++.h>
using namespace std;
#define int long long

struct t
{
	vector<bool>num;
	int ten()
	{
		int re = 0;
		int s = 1;
		for(int i = num.size()-1;i >= 0;i--)
		{
//			cout<<"s:"<<s<<"	re:"<<re<<endl;
			if(num[i])re+=s;
			s*=2;
		}
		return re;
	}
}a[2000005];

t to(int x)
{
	t tx;
	vector<bool>a;
	int n = 0;
	while(x>0)
	{
		n++;
		a.push_back(x%2);
		x/=2;
	}
	while(n--)
	{
		tx.num.push_back(a[n]);
	}
	return tx;
}

t and_(t a,t b)
{
	int mi = min(a.num.size(),b.num.size());
	bool mina = (a.num.size() == mi);
//	cout<<"mina:"<<mina<<endl;
//	t re;
	for(int i = 0;i < mi;i++)
	{
		int ai = a.num.size()-i-1;
		int bi = b.num.size()-i-1;
//		cout<<i<<":("<<a.num[ai]<<","<<b.num[i]<<")"<<endl;
//		cout<<"and:"<<(a.num[ai]&b.num[bi])<<endl;
		if(mina){
			a.num[ai] = a.num[ai]&b.num[bi];
		}
		else{
			b.num[bi] = a.num[ai]&b.num[bi];
		}
		
		
//		cout<<"%";
//		for(int j = 0;j <= i;j++)
//		{
//		int ai = a.num.size()-j-1;
//		int bi = b.num.size()-j-1;
//			if(mina)cout<<a.num[ai]<<" ";
//			else cout<<b.num[bi]<<" ";
//		}
//		cout<<endl;
	}
	if(mina)
		return a;
	else
		return b;
}

int n,m;

int dfs(int x,int len)
{
	if(len>m)return 0;
	if(x >= n-1)return (a[n-1].ten());
	int s=0;
	for(int i = x+1;i < n;i++)
	{
//		for(int j = 0;j < len+1;j++)cout<<"    ";
//		cout<<x<<"dfs:"<<i<<"start:"<<endl;
		t b = and_(to(dfs(i,len+1)),a[x]);
//		for(int j = 0;j < len+1;j++)cout<<"    ";
//		cout<<x<<"dfs:"<<i<<"end:"<<b.ten()<<endl;
		s = max(s,b.ten());
	}
	return s;
}

bool cmp(int x,int y){return x>y;}

signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n>100&&m>=5||n>1000)
	{
		vector<int>b[1145];
		vector<int>c;
		int ma = 0;
		for(int i = 0;i < n;i++)
		{
			int x;
			cin>>x;
			c.push_back(x);
			int m = 1,j;
			for(j = 0;m < x;j++)
			{
				m*=2;
			}
			b[j].push_back(x);
			ma = max(ma,j);
		}
		for(int i = 0;i < ma;i++)
		{
			if(b[i].size()>=m)
			{
				sort(b[i].begin(),b[i].end(),cmp);
				int ans = b[i][0];
				for(int j = 1;j < m;j++)
				{
					t tow = and_(to(ans),to(b[i][j]));
					ans=tow.ten();
				}
				cout<<ans<<endl;
				return 0;
			}
		}
		sort(c.begin(),c.end(),cmp);
		cout<<c[m-1];
	}else
	{
		for(int i = 0;i < n;i++)
		{
			int x;
			cin>>x;
			a[i] = to(x);
		}
		int ans = 0;
		for(int i = 0;i < n;i++)
		{
	//		cout<<"i:"<<i<<endl;
			ans = max(ans,dfs(i,1));
		}
		cout<<ans;
	}
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/

