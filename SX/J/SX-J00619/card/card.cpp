#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[500010];
int b[500010];
int vis[500010];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int p = 1;p <= n;p++){
		for(int i = p;i <= n;i++){
			b[i-p+1] = a[i];
		}
		for(int i = 1;i <= n-p+1;i++){
			for(int j = 1;j <= n-p+1;j++){
				if(b[i] == b[j]){
					for(int k = i;k < j;k++){
						b[k] = -1;
					}
				}
			}
		}
		for(int i = 1;i <= n-p+1;i++){
			if(b[i] != -1) vis[b[i]]++;
		}
	}
	for(int i = 1;i <= m;i++){
		cout << vis[i] << ' ';
	}
	return 0;
}