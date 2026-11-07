#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}sort(a+1,a+n+1,greater<int>());
	for(int i=m;i<=n;i++){
		ans=a[i-m+1];
		for(int j=1;j<=i;j++){
			ans=max(ans&a[i],ans);
		}
	}cout<<ans;
	return 0;
} 
