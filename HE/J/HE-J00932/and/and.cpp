#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[200005];
int ans=0;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//1 2 3 4 
	//1 10 11 100
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n-m+1;i++){
		int uu=a[i];
		for(int j=i+1;j<=i+m-1;j++){
			uu&=a[j];
		}
		ans=max(ans,uu);
	}
	cout<<ans<<endl;
	return 0;
}
