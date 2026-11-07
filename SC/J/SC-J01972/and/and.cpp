#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int n,m;
int a[MAXN];
int p[MAXN][31];
bool f[MAXN];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int tmp,t;
	for(int i=1;i<=n;i++){
		tmp=a[i];
		t=0;
		while(tmp>0){
			p[i][++t]=tmp%2;
			p[0][t]|=p[i][t];//方便判断这一位上有没有 1 ，没有 1 直接不考虑这一位的选择 
			tmp/=2;
		}
//		for(int j=t;j>=1;j--) cout<<p[i][j];
//		cout<<"\n";
		f[i]=1;
	}
	bool flag=0;
	int ans=(1<<30)-1;
	for(int j=30;j>=1;j--){
		if(!p[0][j]) continue ;
		t=0;
		for(int i=1;i<=n;i++)
			if(p[i][j]&&f[i]) t++;
		if(t>m){
			flag=1;
			for(int i=1;i<=n;i++)
				if(!p[i][j]) f[i]=0;
		}
		if(t==m){
			for(int i=1;i<=n;i++)
				if(p[i][j]&&f[i]) ans&=a[i];
			cout<<ans;
			return 0;
		}
	}
	if(!flag){
		cout<<0;
		return 0;
	} 
	for(int i=1;i<=n;i++)
		if(f[i]) ans&=a[i];
	cout<<ans;
	return 0;
}