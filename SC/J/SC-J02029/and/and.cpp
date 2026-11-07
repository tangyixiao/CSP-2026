#include<bits/stdc++.h>
using namespace std;
const long long N=1e5*2+5;
long long n,m,a[N],x,ans;
bool cmp(long long a,long long b){
	return a>b;
}
long long deal(long long num){
	long long x=0;
	while(num){
		num/=2;
		x++;
	}
	return x;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	x=deal(a[m]);
	for(int i=1;i<=m;i++){
		a[i]=a[i]-((a[i]>>x)<<x);
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=m;i++){
		if(i==1) ans=a[i];
		else{
			ans=ans&a[i];
		}
	}
	cout<<ans;
	return 0;
}