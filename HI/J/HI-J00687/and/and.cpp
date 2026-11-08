#include <bits/stdc++.h>
using namespace std;
int n,m,a[50000005],ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
	if (m==1) cout<<a[1];
	else if (m==2){
		ans=-100000000;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++) ans=max(a[i]&a[j],ans);
		}
		cout<<ans;
	}
	else{
		ans=a[1];
		for (int i=1;i<=m;i++) ans&=a[i];
		cout<<ans;
	}
	return 0;
}
