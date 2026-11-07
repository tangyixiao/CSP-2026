#include<bits/stdc++.h>
using namespace std;
struct Node{
	int l,r,sum,ad;
}t[2000005];
int n,m,a[500005],cnt[300005];
vector<int> pos[300005];
void pushup(int u){
	t[u].sum=t[u<<1].sum+t[u<<1|1].sum;
}
void pushdown(int u){
	t[u<<1].sum+=(t[u<<1].r-t[u<<1].l+1)*t[u].ad;
	t[u<<1|1].sum+=(t[u<<1|1].r-t[u<<1|1].l+1)*t[u].ad;
	t[u<<1].ad+=t[u].ad;
	t[u<<1|1].ad+=t[u].ad;
	t[u].ad=0;
}
void build(int u,int l,int r){
	t[u].l=l,t[u].r=r;
	if(l==r){
		return;
	}
	int mid=(l+r)>>1;
	if(l<=mid)build(u<<1,l,mid);
	if(r>mid)build(u<<1|1,mid+1,r);
	pushup(u);
	return;
}
void add(int u,int l,int r,int k){
	if(l<=t[u].l&&t[u].r<=r){
		t[u].ad+=k;
		t[u].sum+=(t[u].r-t[u].l+1)*k;
		return;
	}
	pushdown(u);
	int mid=(t[u].l+t[u].r)>>1;
	if(l<=mid)add(u<<1,l,r,k);
	if(r>mid)add(u<<1|1,l,r,k);
	pushup(u);
	return;
}
int query(int u,int l,int r){
	if(l<=t[u].l&&t[u].r<=r)
		return t[u].sum;
	pushdown(u);
	int val=0,mid=(t[u].l+t[u].r)>>1;
	if(l<=mid)val+=query(u<<1,l,r);
	if(r>mid)val+=query(u<<1|1,l,r);
	return val;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pos[a[i]].push_back(i);
	}
	build(1,1,n);
	for(int i=1;i<=n;i++){
		int nxt=pos[a[i]][pos[a[i]].size()-1];
		add(1,max(nxt,i),n,1);
		//for(int i=1;i<=7;i++){
		//	cout<<t[i].sum<<" "<<t[i].ad<<endl;
		//}
		//cout<<"-------\n";
	}
	for(int i=1;i<=n;i++){
		cnt[a[i]]+=query(1,i,i);
		//cout<<query(1,i,i)<<endl;
	}
	for(int i=1;i<=m;i++)
		cout<<cnt[i]<<(i==m?"\n":" ");
	return 0;
}
/*
4 3
1 2 1 3
---
10 3
3 1 2 1 3 2 3 1 2 1
*/
