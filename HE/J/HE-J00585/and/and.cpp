#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+10;
long long a[N];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n;
	cin>>n;
	long long m;
	cin>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	long long ans=a[1];
	for(long long i=2;i<=m;i++){
		ans=ans & a[i];
	}
	cout<<ans;
	return 0;
}
