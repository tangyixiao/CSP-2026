#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+10;
long long a[N];
long long n,m;
void annd(){
	long long ans=a[1];
	for(long long i=2;i<=m;i++){
		ans&=a[i];
	}
	cout<<ans;
}
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	annd();
	return 0;
}
