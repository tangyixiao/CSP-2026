#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{int num;char type;};
vector <node> a;
int cnt,n,x,ans;char c;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=0;i<n;i++) 
	{
		scanf("%lld%s",&x,&c);cnt+=x;
		if(i!=1 && a[a.size()-1].type==c) a[a.size()-1].num+=x;
		else a.push_back({x,c});
	}
//	int dani=0,snct=0;
//	for(int i=0;i<n;i++)
//	{
//		if(snct<=(cnt/2) && snct+a[i].num>=(cnt/2)) 
//		{
//			dani=i;
//			break;
//		}
//		snct+=a[i].num;
//	}
//	
	for(int i=0;i<a.size();i++)
	{
		for(int j=a.size()-1;j>=0;j--)
		{
			if(a[i].num>=a[j].num)
			{
				a[i].num-=a[j].num;
				if(a[j].type != a[i].type) ans+=a[j].num;
				a.pop_back();
			}
			if(a[i].num<a[j].num)
			{
				if(a[j].type != a[i].type) ans+=a[i].num;
				a[i].num=0;a[j].num-=a[i].num;
				break;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}