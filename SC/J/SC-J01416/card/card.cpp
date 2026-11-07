#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[500005],t[500005],tt[500005];
int p[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for (int i = 1;i <= n;i++){
		int l = 0;
		memset(p,0,sizeof(p));
		memset(t,0,sizeof(t));
		for (int j = i;j <= n;j++){
			for (int k = 1;k <= l;k++){
				if(p[k] == a[j]){
					int cnt = 0;
					for (int x = k;x <= l;x++){
						p[x] = 0;
						cnt++;
					}
					l -= cnt;
				}
			}
			p[l+1] = a[j];
			l++;
		}
		for (int j = 1;j <= l;j++){
			t[p[j]] = 1;
		}
		for (int j = 1;j <= m;j++){
			if(t[j]){
				tt[j]++;
			}
		}
	}
	for (int i = 1;i <= m;i++){
		cout << tt[i] << " ";
	}
	return 0;
} 