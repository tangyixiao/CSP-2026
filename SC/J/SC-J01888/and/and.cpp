#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,ans=0,h=0;
	string a;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=0;i<n;i++){
		long long x;
		char m;
		scanf("%lld %c",&x,&m);
		for(int j=0;j<x;j++){
			a[h]=m;
			h++;
		}
	}
	for(int i=0;i<h/2;i++){
		if(a[i]==a[h-i-1]){
			continue;
		}else{
			ans++;
		}
	}
	printf("%lld",ans);
	return 0;
}