#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int ch[31*N][2];
int cnt[N];
int a[N];
int idx = 0;
int n,m;

void insert(int n){
	int p = 0;
	int x;
	for (int i = 30; i >= 0; i--){
		x = n >> i & 1;
		if (ch[p][x] == 0){
			ch[p][x] = ++idx;
		}
		if (x == 1){
			cnt[p]++;
		}
		cout << x << " " << cnt[p] << endl;
		p = ch[p][x];
	}
}

int query(int n){
	int p = 0;
	int x;
	int ans = 0;
	for (int i = 30; i >= 0; i--){
		x = n >> i & 1;
		if (x == 1 && cnt[p] >= m){
			ans += 1 << i;
		}
		p = ch[p][x];
	}
	return ans;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		insert(a[i]);
	}
	int maxx = -1;
	for (int i = 1; i <= n; i++){
		maxx = max(maxx,query(a[i]));
	}
	cout << maxx;
	return 0;
}
