#include <bits/stdc++.h>
using namespace std;
long long a[10000007];
int digits(long long k){
	int ret=0;
	while(k){
		ret+=k&1;
		k>>=1;
	}
	return ret;
}
bool cmp(long long x,long long y){
	return digits(x)<digits(y);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	long long sum=(1ll<<31)-1,ans;
	sort(a+1,a+1+n);
	for(int i=n;i>=n-m+1;i--){
		sum=sum&a[i];
	}
	ans=sum;
	sum=(1ll<<31)-1;
	sort(a+1,a+1+n,cmp);
	for(int i=n;i>=n-m+1;i--){
		sum=sum&a[i];
	}
	cout << max(ans,sum);
	return 0;
} 
