#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxx=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	for(int i=n;i>=m;i--){
		int x=a[i-m+1];
		for(int j=i-m+1;j<=i;j++){
			x=x&a[i];
		}
		maxx=max(maxx,x);
		if(x<maxx)break;
	}
	cout<<maxx;
	return 0;
}


