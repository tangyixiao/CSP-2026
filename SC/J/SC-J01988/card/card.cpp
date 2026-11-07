#include<bits/stdc++.h>
using namespace std;

const int N = 5e5 + 10;

int n, m;
int a[N];

int t[N];
int b[N];

int ans[N];

int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(int i = 1;i <= n;i ++){
		scanf("%d", &a[i]);
	}
	
	for(int i = n;i >= 1;i --){
		if(!t[a[i]]){
			t[a[i]] = i;
		}
	}
	for(int i = 1;i <= n;i ++){
		b[i] = 1;
	}
	for(int i = 1;i <= n;i ++){
		b[ t[a[i]] + 1 ] += b[i];
		ans[a[i]] += b[i];
	}
	
	for(int i = 1;i <= m;i ++){
		cout << ans[i] << " ";
	}
	
	return 0;
}