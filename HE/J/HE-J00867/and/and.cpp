#include<bits/stdc++.h>
using namespace std;
long long a[200010],n,m,ans = -1;
long long d[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >>n>>m;
	for(int i = 1;i<=n;i++) cin >>a[i],ans = max(ans,a[i]);
	if(m==1){
		cout <<ans;
		return 0;
	}else if(n==m){
		d[1] = a[1];
		for(int i = 1;i<=n;i++) d[i] = a[i]&d[i-1];
		cout <<d[n];
		return 0;
	}else{
		d[1] = a[1];
		for(int i = 2;i<=n;i++) d[i] = a[i]&a[i-1];
		cout <<d[n];
		return 0;
	}
	
}
