#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long ans;
int a[1000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(a[i]>=ans){
			ans=a[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}
