#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int n,m,a[maxn],maxa=-1e7;
long long dp[maxn];
int sw(int x){
	int cnt=0;
	for(int i=1;x>0;i++){
		if(x%2==1){
			cnt++;
			//TODO
		}
		x/=2;
		//TODO
	}
	return cnt;
}
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	long long ls1;
	for(int i=1;i<=n;i++){
		cin>>ls1;
		a[i]=sw(ls1);
		dp[a[i]]=max(dp[a[i]],ls1);
	}
	sort(a+1,a+1+n,cmp);int erg=a[m];
	
	cout<<dp[erg];
}