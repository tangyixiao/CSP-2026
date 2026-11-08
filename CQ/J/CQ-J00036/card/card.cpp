#include <bits/stdc++.h>
using namespace std;
int a[500086];
int n, m;
int o[300086];
void d(int x){
	int p[500086] = {0};
	for(int i = x; i <= n; i++){
		if(p[a[i]] == 1){
			for(int j = i-1; j >=1; j--){
				if(a[j] == a[i]){
					break;
				}
				p[a[j]] = 0;
			}
		}
		p[a[i]] = 1;
	}
	for(int i = 1; i <= n; i++){
		if(p[i] > 0){
			o[i]++;
		}
	} 
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n ;i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n;i++){
		d(i);
	}
	for(int i = 1; i <= m; i++){
		cout << o[i] << " ";
	}
	return 0;
}
