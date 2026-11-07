#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll cifang[50]={1,2,4,8,16,32,64,128,256,512,1024,
2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,
2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
ll n,m,a[N],l,min1,ans;
ll ci(ll x){
	for(ll i=0;i<=30;i++){
		if(x<cifang[i]) return cifang[i-1];
	}
	return cifang[30];
}
ll minus1=0;
void f(ll x){
	if(x==n-m+1) return;
	for(ll i=x;i<=n;i++){
		a[i]-=min1;
		minus1+=min1; 
	}
	sort(a+x,a+n+1);
	min1=ci(a[n-m+1]);
	for(ll i=n-m;i>=x;i--){
		if(i<min1){
			f(i+1);
			return;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	f(1);
	for(ll i=n-m+1;i<=n;i++){
		a[i]+=minus1;
	}
	ans=a[n];
	for(ll i=n-m+1;i<=n;i++){
		ans=(ans&a[i]);
	}
	cout<<ans;
	return 0;
} 
