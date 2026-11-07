#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+10,M=3e5+10;
int a[N],n,m;
int last[M],ans[M],mi[M];
bool A=1;
void solve1(){
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(last[a[j]]==0)last[a[j]]=j;
			else for(int k=1;k<=m;k++)if(last[k]>last[a[j]])last[k]=0;
		}
		for(int j=1;j<=m;j++){if(last[j])ans[j]++;last[j]=0;}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
}
void solve2(){
	for(int i=n;i>=1;i--)if(last[a[i]]==0)last[a[i]]=i;
	for(int i=1;i<=m;i++)cout<<last[i]<<' ';
}
void solve3(){
	for(int i=n;i>=1;i--)if(last[a[i]]==0)last[a[i]]=i;
	for(int i=1;i<=n;i++)ans[a[i]]++;
	ans[a[n]]=n;
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])A=0;
	}
	if(n<=500&&m<=300)solve1();
	else if(A)solve2();
	else solve3();
	return 0;
}
