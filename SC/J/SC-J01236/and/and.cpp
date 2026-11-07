#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
long long ma=-1;
int b[200005];
bool cmp(int X,int Y){
	return X>Y;
}
void dfs(int p){
	if(p==m+1){
		long long ans=(1<<30)-1;
		for(int i=1;i<=m;i++){
			ans&=a[b[i]];
		}
		ma=max(ma,ans);
		return;
	}
	for(int i=b[p-1]+1;i<=n-m+p;i++){
		b[p]=i;
		dfs(p+1);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	bool f=1;//全是<4 
	bool f2=1;//a[i]=i-1
	int n3=0,n2=0,n1=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=4) f=0;
		if(a[i]!=i-1){
			f2=0;
		}
		if(f==1){
			if(a[i]==3) n3++;
			if(a[i]==2) n2++;
			if(a[i]==1) n1++;
		}
	}
	if(f==1){
		if(n3>=m){
			cout<<3;
		}else if(n3+n2>=m){
			cout<<2;
		}else if(n3+n1>=m){
			cout<<1;
		}else cout<<0;
		return 0;//10
	}
	if(m==n){
		long long ans=(1<<30)-1;
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;//5
	}if(m==1){
		int maxn=-1;
		for(int i=1;i<=n;i++){
			maxn=max(maxn,a[i]);
		}
		cout<<maxn;
		return 0;//5
	}
	if(n<=25){
		dfs(1);
		cout<<ma;
		return 0;//25
	}
	if(n<=2000&&m<=2){
		dfs(1);
		cout<<ma;
		return 0;//15
	}
	if(m==n-1){
		long long ma=-1;
		long long ans=(1<<30)-1,o;
		for(int i=1;i<=n;i++){
			o=ans;
			for(int j=i+1;j<=n;j++){
				o&=a[j];
			}
			ma=max(ma,o);
			ans&=a[i];
		}
		cout<<ma;
		return 0;
	}
	if(f2==1){
		long long ans=(1<<30)-1;
		for(int i=n;i>=n-m+1;i--){
			ans&=a[i];
		}
		cout<<ans;//10
		return 0;
	}
	sort(a+1,a+1+n,cmp);
	long long ans=(1<<30)-1;
	for(int i=1;i<=m;i++){
		ans&=a[i];
	}
	cout<<ans;//5
	return 0;
}