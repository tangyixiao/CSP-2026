#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<long long>a(n+1);
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a.begin()+1,a.end());
	long long ans=-1;
	for(int i=1;i<=n-m+1;i++){
		long long p=a[i];
		for(int j=i+1;j<=i+m-1;j++){
			p&=a[j];
		}ans=max(p,ans);
	}cout<<ans;
	return 0;
}
