#include<bits/stdc++.h>
using namespace std;
long long ans,sum,n,m,a[500001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,greater<int>());
	for(int i=1;i<=n-m+1;i++){
		sum=a[i];
		for(int j=1;j<=m-1;j++){
			sum=sum&a[j+i]; 
		}
		ans=max(ans,sum);
	} 
	cout<<ans;
}
