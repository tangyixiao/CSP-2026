#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],f;
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1,cmp);
	f=a[1];
	for(int i=2;i<=m;i++){
		f=f&a[i];
	}
	cout<<f;
	return 0;
}
