#include<iostream>
#include<cmath>
#define int long long
using namespace std;
const int maxn=2e5+5;
int n,m;
int a[maxn];
int Max(int a,int b) {
	if(a>=b) {
		return a;
	}
	return b;
}
void solve1() {
	int ans;
	cin>>a[1];
	ans=a[1];
	for(int i=2; i<=n; i++) {
		cin>>a[i];
		ans&=a[i];
	}
	cout<<ans<<endl;
	return ;
}
void solve2() {
	int ans;
	cin>>a[1];
	ans=a[1];
	for(int i=2; i<=n; i++) {
		cin>>a[i];
		ans=Max(ans,a[i]);
	}
	cout<<ans<<endl;
	return ;
}
void solve3() {
	int ans=0;
	int tmp;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n; i++) {
		tmp=a[i];
		for(int j=i+1; j<=n; j++) {
			ans=Max(a[i]&a[j],ans);
		}
	}
	cout<<ans;
	return ;
}
void solve5() {
	bool hs1=0,hs2=0,hs3=0,hs0=0;
	for(int i=1; i<=n; i++) {
		if(a[i]==1) {
			hs1=1;
		} else if (a[i]==2) {
			hs2=0;
		} else if(a[i]==3) {
			hs3=0;
		} else {
			hs0=1;
		}
	}
	if(hs0==1) {
		if(!hs1&&!hs2&&!hs3) {
			cout<<0;
			return ;
		} else {
			if(hs3>=m) {
				cout<<3;
				return ;
			}
			if(hs2>=m) {
				cout<<2;
				return ;
			}
			if(hs1>=m) {
				cout<<1;
				return;
			}
			cout<<0;
			return ;
		}
	}
}
void solve6() {
	int i;
	for(i=1;pow(2,i)<=a[n];i++){}
	i--;
	if(m<=(a[n]-(int)pow(2,i)+1)){
		cout<<(int)pow(2,i);
		return ;
	}
	cout<<(int)pow(2,i-1);
	return ;
}
int ans;
void dfs(int lst,int now,int k) {
	if(now==m) {
		ans=Max(ans,k);
		return ;
	}
	for(int i=lst+1; i<=n; i++) {
		if(lst==0) {
			dfs(i,now+1,a[i]);
		} else {
			dfs(i,now+1,k&a[i]);
		}
	}
	return ;
}
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==n) {
		solve1();
		return 0;
	}
	if(m==1) {
		solve2();
		return 0;
	}
	if(m==2) {
		solve3();
		return 0;
	}
	bool f=1,fl=1;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		if(a[i]>=4) {
			f=0;
		}
		if(a[i]!=i-1) {
			fl=0;
		}
	}
	if(f) {
		solve5();
		return 0;
	}
	if(fl) {
		solve6();
		return 0;
	}
	dfs(0,0,0);
	cout<<ans;
	return 0;
}
