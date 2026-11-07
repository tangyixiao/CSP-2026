#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int n,m,f[N][35],a[N],tot[N];
bool use[N],pre[N];
void split(int i) {
	int x=a[i];
	while(x) {
		f[i][++tot[i]]=x%2;
		x/=2;
	}
}
bool cmp(int x,int y) {return x<y;}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	int maxn=-1,s=n,ans=0,bef=n;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++) {
		split(i);
		maxn=max(maxn,tot[i]);
	}
//	for(int i=1;i<=n;i++) {
//		cout<<a[i]<<"=";
//		for(int j=1;j<=maxn;j++) cout<<f[i][j];
//		cout<<"\n";
//	}
	for(int i=maxn;i>=1;i--) {
		for(int j=1;j<=n;j++) {
			if(use[j]) continue;
			if(!f[j][i]) {
				use[j]=true;
				s--;
			}
		}
//		cout<<s<<" ";
//		for(int j=1;j<=n;j++) cout<<use[j]<<" ";
//		cout<<"\n";
		if(s<m) {
			memcpy(use,pre,sizeof(use));
			s=bef;
			continue;
		}
		memcpy(pre,use,sizeof(pre));
		bef=s;
		if(s==m) {
			bool qwq=false;
			for(int j=1;j<=n;j++) {
				if(!use[j]) {
					if(!qwq) {
						ans=a[j];
						qwq=true;
					}
					else ans=(ans&a[j]);
				}
			}
			cout<<ans<<"\n";
			return 0;
		}
		if(s>m) continue;
	}
	bool qwq=false;
	for(int j=1;j<=n;j++) {
		if(!use[j]) {
			if(!qwq) {
				ans=a[j];
				qwq=true;
			}
			else ans=(ans&a[j]);
		}
	}
	cout<<ans<<"\n";
	return 0;
}
/*
4 2
3 15 12 12

4 2
3 12 12 15

5 3
31 3 1 15 7

1 3 7 15 31
12295 112052
*/