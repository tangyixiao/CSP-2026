#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5,M = 3e5+5;
int a[N],cnt[N],f[M],d[M],c[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m,maxs = 0;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		maxs = max(maxs,a[i]);
	}
	for(int i = 1;i <= m;i++){
		int ans = 0;
		for(int i = 1;i <= n;i++){
		    
		}
	}
	return 0;
}
