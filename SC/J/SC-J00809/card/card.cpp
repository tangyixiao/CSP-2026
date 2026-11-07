#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+3;
int n,m,a[N],las[N];
int id[N],lc[N],rc[N],fa[N];
int nxt[N],mir[N],tag[N];
int s[N];
void add(int l,int r,int v){
	if(l > r || r > n) return;
//	cout << l << " " << r << "\n";
	s[l] += v;
	s[r+1] -= v;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;++i) cin >> a[i],tag[i] = 1;
	for(int i=n;i>=1;--i){
		if(!las[a[i]]) las[a[i]] = i;
	}
	for(int i=n;i>=1;--i){
		lc[i] = i;
		rc[i] = nxt[a[i]]-1;
		nxt[a[i]] = i;
	}
//	memset(mir,0x3f,sizeof mir);
	rc[0] = 1e9;
	for(int i=n;i>=1;--i){
		mir[i] = mir[i+1];
		if(rc[i] < 0) continue;
//		cout << i << " ";
 		fa[i] = mir[rc[i]+1];
		if(rc[i] < rc[mir[i+1]]) mir[i] = i;
	}
//	cout << "\n";
	for(int i=1;i<=n;++i){
//		cout << lc[i] << " " << rc[i] << " " << fa[i] << " tag\n";
		if(rc[fa[i]] < 0) fa[i] = 0;
	}
//	return 0;
	for(int i=1;i<=n;++i){
		add(lc[i],rc[i],tag[i]);
//		cout << i << " " <<lc[i] << " " << rc[i] << " " << tag[i] << "\n";
		tag[fa[i]] += tag[i];
	}
	for(int i=1;i<=n;++i){
		s[i] += s[i-1];
	}
	for(int i=1;i<=m;++i){
		cout << las[i] - s[las[i]] << " ";
	}
	return 0;
}