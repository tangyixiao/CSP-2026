#include <bits/stdc++.h>
using namespace std;
int a[311111], c[311111] = {0};
struct b{
	string s;
}b[311111];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		do{
			if(a[i] == 1){
				b[i].s += '1';
				break;
			}
			b[i].s += a[i] % 2 + '0';
		}while(a[i] /= 2);
	}
	for(int i = n; i > n-m; i--){
		c[i] = 1;
	}
	int maxn = 0;
	do{
		string k;
		int u = 0;
		for(int i = 1; i <= n; i++){
			if(c[i] == 1 && u == 0){
				k = b[i].s;
				u = 1;
			}else if(c[i] == 1){
				int maxnlong = max(k.size(), b[i].s.size());
				int minnlong = min(k.size(), b[i].s.size());
				for(int j = 0; j < maxnlong; j++){
					if(k[j] == b[i].s[j] && j < minnlong && k[j] != '0'){
						k[j] = '1';
					}else{
						k[j] = '0';
					}
				}
			}
		}
		int chengfang = 1, sum = 0;
		for(int i = 0; i < k.size(); i++){
			sum += (k[i]-'0') * chengfang;
			chengfang *= 2;
		}
		if(sum >= maxn){
			maxn = sum;
		}
	}while(next_permutation(c+1, c+n+1));
	cout << maxn;
	return 0;
}
