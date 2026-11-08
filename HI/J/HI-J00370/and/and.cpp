#include<bits/stdc++.h>
using namespace std;
bool f[200005];
long long a[200005],b[200005],c[200005];
long long n,m,ma,sum;
void print(){
	for(long long f = 1;f <= n;f++){
		c[f] = b[a[f]];
	} 
	for(long long j = 1;j <= n - m + 1;j++){
		sum = c[j];
		for(long long l = j + 1;l <= j + m - 1;l++){
			sum = (sum & c[l]); 
		}
		ma = max(sum,ma);
	}
}
void dfs(long long k){
	for(long long i = 1;i <= n;i++){
		if(f[i] == 0){
			f[i] = 1;
			a[k] = i;
			if(n == k) print();
			else		dfs(k + 1);
			f[i] = 0;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(long long i = 1;i <= n;i++){
		cin >> b[i];
	}
	dfs(1);
	cout << ma;
	return 0;
}
