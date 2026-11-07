#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100010],maxv=-0x3f3f3f3f;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			maxv=max(a[i]&a[j],maxv);
		}
	}
	cout<<maxv;
}
