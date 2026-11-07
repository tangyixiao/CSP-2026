#include <bits/stdc++.h>
using namespace std;
int cnt[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m; cin >> n >> m;
	vector <int> a;
	for(int i = 1; i <= n; i++)cin >> a[i];
	for(int q = 1; q <= m; q++){
		vector <int> a1;
		bool b[300005];
		int maxn = 1;
		memset(b,0,sizeof b);
		int x = 1;
		for(int i = q; i <= n; i++){
			if(!b[a[i]]){
				a1[x] = a[i];
				b[x] = 1;
				maxn = max(maxn, x);
				x++;
			}
			else{
				while(1){
					bool p = 0;
					if(a1[x - 1] == a[i])p = 1;
					b[a1[x - 1]] = 0;
					a1[x - 1] = 0;
					x--;
					if(p)break;
				}
			}
		}
		for(int i = 1; i <= maxn; i++){
			if(b[i])cnt[i]++;
		}
	}
	for(int i = 1; i <= m; i++)cout << cnt[i] << " ";
}
