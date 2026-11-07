#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200010];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	if(m == 1){
		long long maxs = 0;
		for(int i = 1;i<=n;i++){
			maxs = max(maxs,a[i]);
		}cout<<maxs;
		return 0;
	}else if(m == 2){
		long long maxs = -1e7;
		for(int i = 1;i<=n;i++){
			for(int j = i+1;j<=n;j++){
				maxs = max(maxs,(a[i]&a[j]));
			}
		}cout<<maxs;
		return 0;
	}else{
		long long num = a[1];
		for(int i = 2;i<=n;i++){
			num = num&a[i];
		}cout<<num;
		return 0;
	}
		
	return 0;
}
