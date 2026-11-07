#include <bits/stdc++.h>
#define int long long
using namespace std;
vector <int > p[300010];
int s[500010],n,m,k,en[300010],ans[500010],flag;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int a = 1;a <= m;a++) en[a] = -1; 
	for(int a = 1;a <= n;a++){
		cin >> s[a];
		if(s[a] < s[a - 1]) flag = 1;
		en[s[a]] = a;
	}
	if(flag == 0){
		int nw = 1;
		while(nw <= n){
			if(s[nw] != s[nw + 1]) cout << nw << " ";
			nw++;
		}
		return(0);
	}
	for(int a = 1;a <= n;a++){
		int nw = a;
		while(nw <= n){
			ans[s[nw]]++;
			nw = en[s[nw]] + 1;
		}
	}
	for(int a = 1;a <= m;a++) cout << ans[a] << " ";
	return(0);
} 
