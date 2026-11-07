#include <bits/stdc++.h>
using namespace std;

int a[200005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);	
	freopen("and.out","w",stdout);
	int m,n,maxn = 0,cnt = 0;
	cin >> n >> m;
	vector<int>a(n);
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		maxn = max(maxn,a[i]);
	}
	if(m == 1) cout << maxn;
	else if(m == 2){
		int maxx = 0;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				if(i == j) continue;
				 maxx = a[i] & a[j];
			}
		}
		cout << maxx;
	}
	else{
		for(int i = 1;i <= n;i++){
			if(maxn == a[i]) cnt++;
		}
		if(cnt == m) cout << maxn;
		else{
			for(int i = 1;i <= n;i++){
				bool b = false;
				for(int j = 1;j <= n;j++){
					if(a[i] > a[j] && i != j){
						swap(a[i],a[j]);
						b = true;
					}
				}
				if(!b) break;
			}
			cout << a[m];
		}
	}
	return 0;
}
