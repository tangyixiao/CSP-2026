#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	int n;
	cin>>n;
	long long m=0,ans=0;
	char a[2000006];
	for(int i=1;i<=n;i++){
		long long x;
		char y;
		scanf("%lld %c",&x,&y);
		for(long long j=1;j<=x;j++)
			a[++m]=y;
	}
	for(long long i=1;i<=m/2;i++){
		if(a[i]!=a[m-i+1])
			ans++;
	}
	cout<<ans;
	return 0;
}