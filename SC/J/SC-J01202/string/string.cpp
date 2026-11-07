#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
struct node
{
	int gs;
	char zf;
}; 
const int N=200010;
int a[N],n,sum,b[N],ans,cnt;
char c[N];
map<char,int> m;
vector<node> v;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		m[c[i]]++;
		sum+=a[i];
		b[i]=b[i-1]+a[i];
	}
	if(m.size()==1||n==1)
	{
		cout<<0;
		return 0;
	}
	if(sum%2!=0)
	{
		sum++; 
	}
	bool r=false;
	for(int i=1;i<=n;i++)
	{
		if(b[i]>sum/2&&!r)
		{
			
			ans=i;
			int x=b[i]-(sum/2),y=a[i]-x;
			node g={y,c[i]},g1={x,c[i]};
			v.push_back(g);
			v.push_back(g1);
			r=true;
		}
		else
		{
			node g={a[i],c[i]};
			v.push_back(g);
		}
	}
	int len=v.size();
	for(int i=0;i<=ans;i++)
	{
		int l=v[i].gs,val=0;
		for(int j=v.size()-1;j>=ans;j--)
		{
			val+=v[j].gs;
			if(val>l)
			{
				int l1=v[j].gs-(val-l);
				if(v[j].zf!=v[i].zf)
				{
					cnt+=l1;
				}
				v[j].gs=val-l;
				break;
			}
			if(v[j].zf!=v[i].zf)
			{
				cnt+=v[j].gs;	
			}
			v.pop_back();
		}
	}
	cout<<cnt;
	return 0;
}