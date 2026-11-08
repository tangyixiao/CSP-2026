#include<bits/stdc++.h>
using namespace std;
/*
二分假
答案不满足单调性！
按位贪心，维护一个集合
每次选出所有在当前位上符合的
如果不够，说明这一位是0，跳过 
杏仁水好喝！
腰果水好喝！
液态痛苦好喝！
（bushi 
*/
int n,m;
int a[200001];
int cnt,b[200001];
int oc,ob[200001];
int ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
//	freopen("and.in","w",stdin);
//	freopen("and.out","r",stdout);
//	freopen("and.in","w",stdout);
//	freopen("and.out","r",stdin);
//	freopen("and.in","r",stdout);
//	freopen("and.out","w",stdin);
//	feropen
//	freoprn
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],ob[++oc]=i;
	for(int targ=29;targ>=0;targ--){
		for(int i=1;i<=oc;i++)if((a[ob[i]]>>targ)&1)b[++cnt]=ob[i];
		if(cnt>=m){
			for(int i=1;i<=cnt;i++)ob[i]=b[i];
			oc=cnt;
			ans+=(1<<targ);
		}cnt=0;
	}
	cout<<ans;
	return 0;
}/*
原来咽回去的泪 才能淹没了脆弱 
你发誓更勇敢 一生与梦相拥
还在等什么啊 要逆风不退啊
这一路光景 有你在身旁 
配重  配重  配重  配重  配重  配重  配重  配重 
配重  配重  配重  配重  配重 
配重  配重  配重 
配重  配重  配重  配重  配重  配重  配重  配重 
配重  配重  配重  配重  配重 
配重  配重  配重 
配重  配重  配重  配重  配重  配重  配重  配重 
配重  配重  配重  配重  配重 
配重  配重  配重 
配重  配重  配重  配重  配重  配重  配重  配重 aaaaaaaa 
配重  配重  配重  配重  配重 
配重  配重  配重 
配重  配重  配重  配重  配重  配重  配重  配重 aaaaaaaa 
*/
