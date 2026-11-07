#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node
{
	int val,id;
}tmp[500005];
struct NODE
{
	int val,f;
}a[500005];
int n,m,nxt[500005],ans[300005];
bool cmp(node a,node b)
{
	if(a.val==b.val) return a.id<b.id;
	return a.val<b.val;
}
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	memset(nxt,-1,sizeof(nxt));
	memset(ans,0,sizeof(ans));
	cin>>n>>m;
	bool f=0;
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i].val;
		tmp[i].val=a[i].val;
		tmp[i].id=i;
		if(a[i].val<a[i-1].val) f=1;
	}
	if(f==1)
	{
		sort(tmp+1,tmp+n+1,cmp);
		for(int i=1;i<=n;i++)
		{
			while(tmp[i+1].val==tmp[i].val)
			{
				nxt[tmp[i].id]=tmp[i+1].id;
				i++;
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;j++)
			{
				while(nxt[j]!=-1) j=nxt[j];
				if(nxt[j]==-1) a[j].f++;
			}
		}
		for(int i=1;i<=n;i++) if(nxt[i]==-1) ans[a[i].val]+=a[i].f;
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	}
	else
	{
		for(int i=1;i<=n;i++) ans[a[i].val]++;
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	}
	return 0;
}
//wo yao ting yu ai si feng ban

//100+56+30+78=268pts
//ye bu zhi dao hui bu hui gua fen
//yao gua fen de hua yi deng bu bao
//na bu jiu dei AFO le ma
//bu yao a
//da jia jue de wo xia wu S zu neng na jiang ma
//wo zen me gan jue T4 bi T2 jian dan
//T3 zui nan le
//nan du gan jue xiang hong cheng huang huang
//wo lian cheng ye qie bu liao le ma TAT
//qi shi wo zhi shi xiang jin mi huo dai ma da shang OvO
//cy950469 qiu guan
