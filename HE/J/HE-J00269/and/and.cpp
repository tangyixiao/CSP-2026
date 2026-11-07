#include<bits/stdc++.h>
using namespace std;
const int N=2e5+50;
long long n,m,a[N],ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		if(i==j) continue;
		long long qq=a[i]&a[j];
		ans=max(qq,ans);
		}
	}
	cout<<ans;
	return 0;
}
