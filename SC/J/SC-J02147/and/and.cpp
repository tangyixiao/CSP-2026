#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MAX=2e5+5;
int n,m,a[MAX];
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n<=2000){
		if(m==1){
			cout<<*max_element(a+1,a+1+n)<<'\n';
			return;
		}else if(m==2){
			int ans=INT_MIN;
			for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)if(i!=j)ans=max(ans,a[i]&a[j]);
			cout<<ans<<'\n';
			return;
		}else if(n==m){
			int ans=a[1];
			for(int i=2;i<=n;i++)ans&=a[i];
			cout<<ans<<'\n';
			return;
		}
	}
	sort(a+1,a+1+n,greater<>());
	int sum=a[1];
//	for(int i=1;i<=m;i++)cout<<a[i]<<'\n';
	for(int i=2;i<=m&&m<=n;i++){
		if((sum&a[i])==0){
			sum=a[i];
			m++;
			if(m>n)break;
		}else sum&=a[i];
	}
	cout<<sum<<'\n';
}
#undef int
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int T=1;
//  cin>>T;
	while(T--)solve();
	return 0;
}