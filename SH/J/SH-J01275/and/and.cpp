#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r");
	freopen("and.out","w");
	int n,m;
	long long ans;
	cin>>n>>m;
	long long a[200010];
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	ans=a[n-m+1];
	for (int i=n-m+2;i<=n;i++){
		ans&=a[i];
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
