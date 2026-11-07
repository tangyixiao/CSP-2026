#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n,m,a[N];
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,cmp);
	int ans=0;
	for(int i=1;i<=n-m+1;i++){
		int cnt=a[i];
		for(int j=1;j<=m-1;j++){
			int t=i+j;
			cnt=(cnt&a[t]);
		}
		ans=max(ans,cnt);
	}
	cout<<ans<<endl;
	return 0;
}
