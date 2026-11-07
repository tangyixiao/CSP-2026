#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],b[200005],maxx;
bool f[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	maxx=a[n];
	for(int i=1;i<m;i++){
		maxx&=a[n-i];
	}
	cout<<maxx;
}
