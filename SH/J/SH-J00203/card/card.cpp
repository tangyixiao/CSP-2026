#include<bits/stdc++.h>
using namespace std;
int a[500001], c[300001];
bool f[300001];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 1; i <= n; i++){
		memset(f, 0, sizeof(f));
		stack<int>s;
		for(int j = i; j <= n; j++){
			if(!f[a[j]])s.push(a[j]), f[a[j]] = 1;
			else{
				while(s.top()!=a[j]){
					f[s.top()] = 0;
					s.pop();
				}
			}
		}
		for(int j = 1; j <= m; j++){
			if(f[j])c[j]++;
		}
	}
	for(int i = 1; i <= m; i++){
		printf("%d", c[i]);
		if(i<m)printf(" ");
	}
	return 0;
}
