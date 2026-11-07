#include <bits/stdc++.h>
#define int long long
using namespace std;

const int maxn = 5e5 + 10, maxm = 3e5 + 10;
int n, m;
int a[maxn];
vector<int> num[maxm];
bool live[maxn];
int ans[maxm];
bool appear[maxm];

signed main(){
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
		num[a[i]].push_back(i);
	}
	for(int step = 1;step<=n;step++){
		for(int i = 1;i<=n;i++){
			if(i<step) live[i] = 0;
			else live[i] = 1;
		}
		for(int i = step;i<=n;i++){
			int last = -1;
			for(int j : num[a[i]]){
				if(j == i) break;
				if(live[j]) last = j;
			}
			//cout << last << " ";
			if(last == -1) continue;
			for(int j = last;j<i;j++) live[j] = 0;
		}
		fill(appear, appear+m+1, 0);
		for(int i = 1;i<=n;i++){
            //cout << live[i] << " ";
			if(live[i]) appear[a[i]] = 1;
		}
		for(int i = 1;i<=m;i++){
			if(appear[i]) ans[i]++;
		}
		//cout << endl;
	}
	for(int i = 1;i<=m;i++) cout << ans[i] << " ";
}
