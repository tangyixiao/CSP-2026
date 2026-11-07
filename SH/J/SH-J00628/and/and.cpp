#include<bits/stdc++.h>
using namespace std;
int a[200010];
int maxn = -114514;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int l = 1, r = 2;
	while(l <= n){
		maxn = max(maxn, a[l]&a[r]);
		r++;
		if(r > n){
			l++;
			r = l+1;
		}
	}
	cout << maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
