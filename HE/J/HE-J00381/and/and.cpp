#include<bits/stdc++.h>
using namespace std;
long long a[100005],sum[100005];
int main(){
//ios::sync_with_stdio(false);
//cin.tie(0);
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
int n,m;
cin>>n>>m;
for(int i=1;i<=n;i++){
	cin>>a[i];
}
for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
		for(int k=1;k<=m;k++){
			sum[i]=a[i]&a[j];
		}
	}
}
sort(sum,sum+n);
cout<<sum[n];
return 0;
}

