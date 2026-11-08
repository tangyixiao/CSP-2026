/*
	CSP-S 2026 RP++
	
	从高位往低位依次考虑 
	这一位选满 m 个，则再下一位一定不优
	此时需要考虑这一位为 1 的数的大小 
	
	第一次 20min 场切 T3  
	好想玩原神 /kel 
	
	曾许下心愿  等待你 的出现
	褪色的秋千  有本书 会纪念
	我循着时间  捡起梦 的照片
	童话还没有兑现  却需要说再见
	...
	当漪涟  消散 万千 不见
	永恒和瞬间都被爱意成全 
	我的明天叫做昨天
	Ooh
	要相信  浪漫 一如 初见
	请笑着向我道别
	最后这一页 就让它无言
	我会在扉页 等待你续写 起点
	... 
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int GenshinI=1<<20;
char *p1,*p2,buf[GenshinI];
#define nc() (p1==p2&&(p2=(p1=buf)+fread(buf,1,GenshinI,stdin),p1==p2)?EOF:*p1++)
inline int read()
{
	int x=0,f=1;char ch=nc();
	while(ch<'0'||ch>'9')
	{
		if(ch=='-') f=-1;
		ch=nc();
	}
	while(ch>='0'&&ch<='9') x=x*10+ch-'0',ch=nc();
	return x*f;
}
const int maxn=4e5+7;
ll a[maxn];
bool cmp(ll x,ll y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n=read(),m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	sort(a+1,a+n+1,cmp); 
	for(int b=30;b>=0;b--)
	{
		int ans=0,cnt=0;
	//	cout<<b<<'\n';
		for(int i=1;i<=n;i++)
		{
			if(cnt>=m) break;
			if((1<<b)&a[i])
			{
		//		cout<<a[i]<<' ';
				cnt++;
				if(ans==0) ans=a[i];
				else ans&=a[i];
			} 
		}
		if(cnt>=m)
		{
			cout<<ans;
			return 0;
		}
	}
	return 0;
}

