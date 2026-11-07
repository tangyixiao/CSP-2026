#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define lc u<<1
#define rc u<<1|1
const int N = 5e5+5;
struct node{
	ll sum;
	ll del;
}tr[N<<2];
void pushdown(int u, int l, int r){
	tr[u].sum = tr[u].sum + tr[u].del*(r-l+1);
	
	if(l != r){
		tr[lc].del = tr[lc].del + tr[u].del;
		tr[rc].del = tr[rc].del + tr[u].del;
	}
	
	tr[u].del = 0;
}
void pushup(int u, int l, int r){
	if(l!=r){
		int mid=l+r>>1;
		pushdown(lc,l,mid);
		pushdown(rc,mid+1,r);
	}
	tr[u].sum = tr[lc].sum + tr[rc].sum;
}
void build(int u, int l, int r){
	if(l==r)return;
	int mid = l+r>>1;
	build(lc,l,mid);
	build(rc,mid+1,r);
	pushup(u,l,r);
}
void update(int u, int l, int r, int L, int R, int k){
	pushdown(u,l,r);
	if(L<=l && r<=R){
		tr[u].del += k;
		return;
	}
	int mid = l+r >> 1;
	if(R <= mid)update(lc,l,mid,L,R,k);
	else if(L > mid)update(rc,mid+1,r,L,R,k);
	else update(lc,l,mid,L,R,k),update(rc,mid+1,r,L,R,k);
	pushup(u,l,r);
}
ll query(int u, int l, int r, int L, int R){
	pushdown(u,l,r);
	if(L<=l && r<=R)return tr[u].sum;
	int mid = l+r >> 1;
	if(R <= mid)return query(lc,l,mid,L,R);
	else if(L > mid)return query(rc,mid+1,r,L,R);
	else return query(lc,l,mid,L,R)+query(rc,mid+1,r,L,R);
}
int a[N];
int lst[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	build(1,1,n);
	for(int i=1; i<=n; ++i){
		cin >> a[i];
		lst[a[i]]=i;
	}
	for(int i=1; i<=n; ++i){
		if(i==lst[a[i]])continue;
		int x = query(1,1,n,i,i);
		update(1,1,n,i,lst[a[i]]-1,i-x);
	}
	vector<int>ans(m+1,0);
	for(int i=1; i<=n; ++i){
		int x = query(1,1,n,i,i);
//		cout << x << '\n';
		ans[a[i]]=max(ans[a[i]],i-x);
	}
	for(int i=1; i<=m; ++i)cout << ans[i] << ' ';
	return 0;
}
/*
I'm the bone of my sword,blade is my blood.
Unknown to death, nor known to life.
Unlimited blade works. 
强烈推荐fate! 
还有，万圣节快乐！
Trkick or treat? 
*/