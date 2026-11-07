#include<bits/stdc++.h>
using namespace std;
int n, m, a[500005], r[300005];
queue<int> q;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		int d[500005], di = 0;
		bool v[300005];
		for(int j = 0; j < n; j++) q.push(a[j]);
		for(int j = 0; j < i-1; j++) q.pop();
		while(!q.empty()){
			bool e = 0;
			for(int j = 0; j < di; j++){
				if(d[j] == q.front()){
					e = 1;
					di = j;
				}
				if(e) d[j] = 0;
			}
			d[di++] = q.front();
			q.pop();
		}
		for(int j = 0; j < di; j++){
			if(v[d[j]] == 0){
				r[d[j]]++;
				v[d[j]] = 1;
			}
		}
	}
	for(int i = 1; i <= m; i++){
		cout << r[i] << ' ';
	}
	return 0;
}