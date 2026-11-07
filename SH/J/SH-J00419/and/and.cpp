#include <bits/stdc++.h>
using namespace std;
const int ALL1=2147483647;
int ans,n,m,a[200005];
void dfs(int i,int k,int sum) {//选到了前i个，还剩k个可选，当前值为sum 
	if(k==0) {
		if(sum!=ALL1) ans=max(ans,sum);
		return;
	}
	if(i==n+1) return;
	dfs(i+1,k,sum);
	dfs(i+1,k-1,sum&a[i]);
}
void solve1() {
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(1,m,ALL1);
	cout<<ans;
}
int cnt[35];
bool atwo[200005][35];
void solve2() {
	int ans=ALL1;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		ans&=a[i];
		int x=a[i],j=0;
		while(x) {
			cnt[j]+=(x&1);
			atwo[i][j++]=(x&1);
			x>>=1;
		}
	}
	int ans1=ans;
	for(int i=1;i<=n;i++) {//枚举删除的数 
		int tmp=ans1;
		for(int j=0;j<=22;j++) {
			bool now=atwo[i][j];
			if(!now&&cnt[j]==n-1) {
				tmp+=pow(2,j);
			}
		}
		ans=max(tmp,ans);
	}
	cout<<ans;
}
void yunqi() {
	int res=ALL1;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		res=(res&a[i]);
	}
	cout<<res;
}
bool cmp(int x,int y) {
	return x>y; 
}
void solveA() {
	sort(a+1,a+1+n,cmp);
	cout<<a[m];
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n<=2000) solve1();
	else if(m==n-1) solve2();
	else if(m==n) yunqi();
	else {
		bool flag1=1;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			if(flag1) {
				int x=a[i];
				while(x) {
					flag1=(x&1);
					x>>=1;
				}
			}
		}
		if(flag1) {
			solveA();
		}
	}
	return 0;
}

