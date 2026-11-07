#include<bits/stdc++.h>
using namespace std;
long long a[200000000005];
long long b[200000000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long cnt = 0,n,ans = 0,z= 1;
	cin>>n;
	for(long long i = 1;i<=n;i++){
		long long y;
		cin>>a[i]>>y;
		ans+=a[i];
		for(long long j = 1;j<=a[i];j++){
			b[z]= y;
			z++;
		}
	}
	for(long long i = ans/2+1;i<=ans;i++){
		if(b[i]!=b[ans-i+1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}