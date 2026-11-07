#include<bits/stdc++.h>
using namespace std;
struct node{
	int x;
	bool f;
}a[500005];
int t[500005], cnt[300005];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i=1; i <= n; i++){
		cin >> a[i].x;
		a[i].f = false;
	}
	for(int i=1; i <= n; i++){
		memset(t, 0, sizeof(t));
		for(int j=i; j <= n; j++){
			a[j].f = false;
			if(t[a[j].x] > 0){
				bool flag = false;
				for(int k=i; k < j; k++){
					if(a[k].x == a[j].x && !a[k].f){
						flag = true;
					}
					if(flag && !a[k].f){
						t[a[k].x]--;
						a[k].f = true;
					}
				}
			}
			t[a[j].x]++;
		}
		for(int j=1; j <= m; j++){
			if(t[j]) cnt[j]++;
		}
	}
	for(int i=1; i <= m; i++){
		cout << cnt[i] << " ";
	}
	return 0;
}
