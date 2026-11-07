#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],cnt[300005],s[500005],l,r,p;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++){//n局游戏 
		memset(s,0,sizeof(s));//包前不包后 
		l = r = 1;
		for (int j = i; j <= n; j++){
			p = 0;
			if (r - l){//如果栈非空，则寻找与a[j]相同的牌 
				for (int k = r - 1; k >= l; k--){
					if (s[k] == a[j]){
						p = k;
						break;
					}
				}
			}
			if (p) for (int k = j - 1; k >= p; k--) r--; 
			s[r++] = a[j];
		}
		for (int j = l; j < r; j++) cnt[s[j]]++;
	}
	for (int i = 1; i <= m; i++) cout << cnt[i] << " ";
	return 0;
}
