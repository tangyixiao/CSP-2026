#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e5+10;
const int M = 3e5+10;
int n, m;
int a[N];
int num[M];
vector<int>q;
int findd(int z) {
	for (int i = 0; i < q.size(); i++) {
		if (q[i] == z)return i;
	}
	return -1;
}
void youxi(int z) {
	for (int i = z; i <= n; i++) {
		if (findd(a[i]) != -1)q.resize(findd(a[i]));
		q.push_back(a[i]);
	}	
	for (int i = 0; i < q.size(); i++) {
		num[q[i]]++;
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)cin >> a[i];
	for (int i = 1; i <= n; i++) {
		youxi(i);
		q.resize(0);
	}
	for (int i = 1; i <= m; i++) {
		cout << num[i]<<' ';
	}
	return 0;
}/*
10 3
 3 1 2 1 3 2 3 1 2 1
*/