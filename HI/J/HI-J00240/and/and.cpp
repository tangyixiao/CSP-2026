#include<bits/stdc++.h>
using namespace std;
int a[100005];
int b[100005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxx=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		b[i]=a[i]&a[i+1];
		if(maxx<=b[i])
			maxx=b[i];
	}
	cout<<maxx;
	return 0;
}
