/*
	CSP-S 2026 RP++
	
	对于两张相同的牌 i,j
	区间 [i,j-1] 一定不会在结束时留下
	
	对于第一次出现的 i，找到距离其最远的 j 使得 a[i]==a[j]
	显然这个 j 就是最后出现的 a[i]
	 
	T4 比 T3 还水？核心代码才 8 行 ？？
	疑似红橙黄橙 
	
	风把我不想知道的事情 告诉我
	河把我不想忘记的故事 也带走
	我摘下我的翅膀 它变成白鸟
	白鸟我的白鸟 逆着风去吧
	飞过河滩
	挥一挥一去不回还
	一去不回还
	风起水起难靠岸
	白鸟白鸟不要回头望
	你要替我飞去那地方
	一去那地方
	那是你我共同故乡 
	...
	别回来 别回来
	我将终究顺流入大海
	顺流如大海 
	海不问我从何处来
	
	长风长风飘在山海间
	白鸟白鸟展翅如苍天
	一去入苍天
	苍天远在海背面
	一去入苍天
	苍天远比海更远 
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int GI=1<<20;
char *p1,*p2,buf[GI];
#define nc() (p1==p2&&(p2=(p1=buf)+fread(buf,1,GI,stdin),p1==p2)?EOF:*p1++)
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
const int maxn=1e6+7;
ll a[maxn],b[maxn],ans[maxn],d[maxn];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n=read(),m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	for(int i=n;i>=1;i--)
		if(!b[a[i]]) b[a[i]]=i;
//	for(int i=1;i<=n;i++) cout<<b[i]<<' ';
	for(int i=1;i<=n;i++)
	{
		d[b[a[i]]+1]+=d[i]+1;
		ans[a[i]]+=d[i]+1;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
// 3 1 

