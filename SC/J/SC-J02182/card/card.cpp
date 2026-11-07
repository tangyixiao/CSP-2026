#include <bits/stdc++.h>
#define int long long
#define fp(i,a,b) for(int i=a;i<=b;i++)
#define pf(i,a,b) for(int i=a;i>=b;i--)
using namespace std;

constexpr int MN = 5e5+10, MB = 800;
int n, m, a[MN], sq, L[MB], R[MB], pos[MN], lz[MB], vis[MN], cnt[300010];

void ininit() {
	sq = sqrt(n);
	fp(i,1,sq) {
		L[i] = (i-1)*sq+1;
		R[i] = i*sq;
	}
	if(R[sq] < n) R[sq] = n;
	fp(i,1,sq) fp(j,L[i],R[i]) pos[j] = i;
}
void init() {
	fp(i,1,sq) lz[i] = 0;
	fp(i,1,n) vis[i] = 0;
}
void modify(int x, int y) {
	int l = pos[x], r = pos[y];
	if(l == r) {
		fp(i,x,y) vis[i] = 1;
		return ;
	}
	if(!lz[l]) fp(i,x,R[l]) vis[i] = 1;
	if(!lz[r]) fp(i,L[r],y) vis[i] = 1;
	fp(i,l+1,r-1) lz[i] = 1;
}

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin>>n>>m;
	fp(i,1,n) cin>>a[i];
	ininit();
	fp(sc,1,n) {
		init();
		fp(i,sc,n) {
//			cout<<"i: "<<i<<endl;
			int j = sc;
			while(j <= i-1) {
				if(lz[pos[j]]) {
					j = R[pos[j]]+1;
					continue;
				}
				fp(k,j,min(i-1, R[pos[j]])) {
					if(a[k] == a[i] && !vis[k]) {
//						cout<<"modified! "<<k<<' '<<i-1<<endl;
						modify(k, i-1);
						goto end;
					}
				}
				j ++;
			}
			end:;
		}
		fp(i,sc,n) {
			if(lz[pos[i]]) {
				i = R[pos[i]];
				continue;
			}
			if(!vis[i]) cnt[a[i]] ++;
		}
//		fp(i,1,m) cout<<cnt[i]<<' ';
//		cout<<endl;
	}
	fp(i,1,m) cout<<cnt[i]<<' ';
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
10 3 3
*/