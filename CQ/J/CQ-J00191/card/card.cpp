#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N],nex[N],hyw[N],flag=1,annss[10005],vis[N],sum_1[N],sum_2[N];
inline int read(){
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-') f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-48;ch=getchar();}
	return x*f;
}
void solve(){
	for(int i=n;i>=1;i--){
		nex[i]=hyw[a[i]];
		hyw[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			while(nex[j]<=n&&nex[j]) j=nex[j];
			annss[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<annss[i]<<' ';
	}
}
void solve1(){
	if(m==1){
		cout<<n;
		return ;
	}
	for(int i=1;i<=n;i++) sum_1[i]=sum_1[i-1]+bool(a[i]==1),sum_2[i]=sum_2[i-1]+bool(a[i]==2);
	int ans1=0,ans2=0;
	for(int i=1;i<=n;i++){
		if(a[i]==a[n]&&a[i]==1) ans1++;
		else if(a[i]==a[n]&&a[i]==2) ans2++;
		else ans1++,ans2++;
	}
	cout<<ans1<<' '<<ans2;
}
void solve2(){
	memset(annss,0,sizeof annss);
	int last=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i+1]){
			annss[a[i]]=i;
			last=i;
//			cout<<i<<' ';
		}
	}
	for(int i=1;i<=m;i++){
		cout<<annss[i]<<' ';
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read(),m=read();
	a[0]=0;
	for(int i=1;i<=n;i++){
		a[i]=read();
		if(a[i]<a[i-1]){
			flag=0;
		}
	}
	if(flag){
		solve2();
		return 0;
	}
	if(m<=2){
		solve1();
		return 0;
	}
	solve();
	return 0;
} 
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/
