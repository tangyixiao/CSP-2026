#include<bits/stdc++.h>
using namespace std;
long long a[200010],sum[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,max=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]&a[j]>=max) max=a[i]&a[j];
		}
	}
	cout<<max;
	return 0;
}
