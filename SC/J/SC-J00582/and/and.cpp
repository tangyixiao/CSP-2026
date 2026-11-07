#include<bits/stdc++.h>
using namespace std;
int n;
int m,max1;
int a[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	for(int i=n;i>=1;i--){
		int b=a[i];
		for(int j=1;j<m;j++){
			b=b&a[i-j];
		}
		max1=max(b,max1);
	}
	cout<<max1;
	return 0;
}