#include<bits/stdc++.h>
using namespace std;
long long lst[100005], a[5005], cnt[3005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout); 
	long long n, m;
	cin >> n >> m;
	if(n <= 800){
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for(int j = 1; j <= n; j++){
			for(int k = j; k <= n; k++){
				if(lst[a[k]] != 0){
					for(int w = lst[a[k]]; w <= k; w++){
						lst[a[w]] = 0;
					}
				}
				lst[a[k]] = k;
			}
			for(int i = 1; i <= m; i++){
				if(lst[i]){
					cnt[i]++;
					lst[i] = 0;
				}
			}
		}
		for(int i = 1; i <= m; i++) cout << cnt[i] << " ";
	}else{
		for(int i = 1; i <= n; i++){
			int x;
			cin >> x;
			lst[x] = i;
		}
		for(int i = 1; i <= m; i++){
			if(lst[i]) cout << lst[i];
			else cout << 0;
			cout << " ";
		}
	}
} 
/*
LUOGU UID 1549034.

ίχίχίχ. 
*/ 
