#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long n,m,a[N],dp[N],maxn,c,minn=0x3f3f3f3f3f3f3f3f;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
		if(maxn<a[i]){
			maxn=a[i];
			c=maxn;
		}else if(c<a[i]) c=a[i];
	}
	if(m==1){
		cout << maxn;
		return 0;
	} 
	else if(m==n){
		int y = a[1];
		for(int i = 2;i<=n;i++){
			y&=a[i];
		}
		cout << y;
		return 0;
	}else if(m==2){
		long long ans = 0;
		for(int i = 1;i<n;i++){
			for(int j = i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	return 0;
}
