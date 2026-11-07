#include <bits/stdc++.h>
using namespace std;

int n,m,a[200005],ans;
int f(int x,int b,int num){
	int maxn = -1;
	if(num == 1){
		for(int i = b;i <= n;i++){
			maxn = max(x&a[i],maxn);
		}return maxn;
	}
	for(int i = b;i <= n-num+1;i++){
		maxn = max(maxn,f(x&a[i],i+1,num-1));
	}return maxn;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	if(m == 1){
		int maxn = -1;
		for(int i = 1;i <= n;i++){
			cin >> a[i];
			maxn = max(maxn,a[i]);
		}cout << maxn;
		return 0;
	}
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n-m+1;i++){
		ans = max(f(a[i],i+1,m-1),ans);
	}cout << ans;
	return 0;
}