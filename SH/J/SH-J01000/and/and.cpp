#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],ans;
int hu[200005];
long long m2[32];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	if (m==1){
		for (int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
	}
	return 0;
}
