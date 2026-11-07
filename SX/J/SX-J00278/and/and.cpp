#include<bits/stdc++.h>
using namespace std;
long long n,m,ans,a[200005];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long  i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(long long i=0;i<=m;i++){
		ans=a[i]&a[i+1];
	}
	cout<<ans;
	return 0;
}