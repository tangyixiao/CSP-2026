#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,g[500005];
int two(int k){
	int a=0,cnt=0;
	while(k){
		int e=pow(10,cnt);
		a+=e*(k%2);
		k/=2;
		cnt++;
	}
	return a;
}
signed main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>g[i];
	}
	for(int i=1;i<n;i++){
		for(int j=2;j<=n;j++){
			int x1=g[i],x2=g[j];
			
		}
	}
	return 0;
}
