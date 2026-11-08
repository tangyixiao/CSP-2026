#include <bits/stdc++.h>
using namespace std;
int a[500005], b[300005], c[30005], d[30005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout); 
	int m, n;
	cin >> n >> m;
	for(int i = 1;i <= n; ++i)
		cin >> a[i];
	int l = 1;
	for(int i = 1;i <= n; ++i){
		for(int  j = i; j <= n; ++j){
			if(c[a[j]] != 0){
				for(;l >= 1 ; --l){
					if(d[l] == a[j]){
						d[l] = 0;
						c[d[l]] -= 2 ;
						break;
					}
						d[l] = 0;
						--c[d[l]];
				}
			}	
			else{
				d[l] = a[j];
				++c[a[j]];
				++l;
			}
		}
		if(m == n){
		for(int i = 1;i <=m;++i)
				cout <<"0 ";
			return 0;
		}
		for(int j = 1; j <= n; ++j){
			if(d[j]>0)
				++b[d[j]];
			else break;
		}
	}
	for(int i = 1; i <= m ;++i)
		cout << b[i] <<" ";
	return 0;
}
