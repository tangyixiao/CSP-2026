#include<iostream>
#include<cstring>
#include<map>
#include<cstdio>
using namespace std;
map <int, int> m;
map <int, int> p;
int a[100010], st[200010];
bool b[100010];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++){
		int x;
		cin >> x;
		st[i]= x;
		if (p.count(x)) m[p[x]] = i;
		else p[x] = i;
	}
	for (int i = 1; i <= n; i++){
		int now = i;
		memset(b, 0, sizeof(b));
		while(now <= n){
			b[st[now]] = true;
			if (m.count(now)) now = m[now] + 1;
			else now++;
		}
		for (int i = 1; i <= k; i++){
			if (b[k]) a[k]++;
		}
	}	
	for (int i = 1; i <= k; i++){
		cout << a[k] << " ";
	}
} 
