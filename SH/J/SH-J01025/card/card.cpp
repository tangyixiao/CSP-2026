#include <bits/stdc++.h>
using namespace std;
int a[500005], nxt[500005], pre[500005], sum[500005];
int n, m;
void init(){
	for(int i = 0;i < n;i++){
		pre[i] = -1;
		nxt[i] = -1;
	}
}
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	init();
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(pre[a[i]] == -1){
			pre[a[i]] = i;
		}else{
			nxt[pre[a[i]]] = i;
			pre[a[i]] = i;
		}
	}
	int j;
	for(int i = 0;i < n;i++){
		j = i;
		while(nxt[j] != -1){
			j = nxt[j];
		}
		nxt[i] = j;
	}
	for(int i = 0;i < n;i++){
		j = i;
		while(j < n){
			if(nxt[j] != -1){
				j = nxt[j];
			}
			sum[a[j]]++;
			j++;
		}
	}
	for(int i = 1;i <= m;i++){
		cout << sum[i] << " ";
	}
	return 0;
}
