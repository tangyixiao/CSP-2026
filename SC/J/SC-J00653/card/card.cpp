#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
const int MX=5e5+5;
int n, m, cnt;
int a[MX], b[MX], ans[MX], tb[MX];
struct node{
	bool f=true;
	int t=-1;
}card[MX];
signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i=1; i<=n; i++)  cin >> a[i];
	for(int i=1; i<=n; i++) {
		cnt=i-1;
		memset(tb, 0, sizeof(tb));
		for(int j=i; j<=n; j++) {
			if(!card[a[j]].f ) {
				b[++cnt]=a[j];
				card[a[j]].f=1;
				card[a[j]].t=cnt;
			}
			else {
				for(int k=card[a[j]].t; k<cnt; k++) {
					card[b[k]].t=-1;
					card[b[k]].f=false;
				}
				cnt=card[a[j]].t;
				b[cnt]=a[j];
			} 
		}
		for(int j=1; j<=m; j++) {
			if(card[j].f)  ans[j]++;
		}
	} 
	for(int i=1; i<=m; i++)  cout << ans[i] << ' ';
	return 0;
 }

