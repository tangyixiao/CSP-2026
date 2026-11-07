#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long num,ans=0;
	for(int i=m;i<=n;i++){
		num=a[i];
		for(int j=1;j<=m;j++){
			num=num&a[i-j];
		}
		ans=max(num,ans);
	}
	cout<<ans;
	return 0;
}