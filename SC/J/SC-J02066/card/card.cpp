#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[500005];
struct node{
	int val,lazy;
	int vis,lazy2;
};
node tree[2000005];
void push_up(int x){
	tree[x].val=tree[x*2].val+tree[x*2+1].val;
	tree[x].vis=tree[x*2].vis+tree[x*2+1].vis;
}
void push_down(int x,int l,int r){
	int mid=(l+r)/2;
	if(tree[x].lazy){
		tree[x*2].val+=tree[x].lazy*(mid-l+1);
		tree[x*2+1].val+=tree[x].lazy*(r-mid);
		tree[x*2].lazy+=tree[x].lazy;
		tree[x*2+1].lazy+=tree[x].lazy;
		tree[x].lazy=0;
	}
	if(tree[x].lazy2){
		tree[x*2].vis=1;
		tree[x*2+1].vis=1;
		tree[x*2].lazy2=tree[x].lazy;
		tree[x*2+1].lazy2=tree[x].lazy;
		tree[x].lazy2=0;
	}
}
void change(int x,int l,int r,int ql,int qr,int v){
	if(ql<=l&&r<=qr){
		tree[x].val+=v*(r-l+1);
		tree[x].lazy+=v;
		return ;
	}
	push_down(x,l,r);
	int mid=(l+r)/2;
	if(ql<=mid)change(x*2,l,mid,ql,qr,v);
	if(qr>mid)change(x*2+1,mid+1,r,ql,qr,v);
	push_up(x);
}
void change2(int x,int l,int r,int ql,int qr){
	if(ql<=l&&r<=qr){
		tree[x].vis=1;
		tree[x].lazy2=1;
		return ;
	}
	push_down(x,l,r);
	int mid=(l+r)/2;
	if(ql<=mid)change2(x*2,l,mid,ql,qr);
	if(qr>mid)change2(x*2+1,mid+1,r,ql,qr);
	push_up(x);
}
int query(int x,int l,int r,int pos){
	if(l==r){
		return tree[x].val;
	}
	push_down(x,l,r);
	int mid=(l+r)/2;
	if(pos<=mid)return query(x*2,l,mid,pos);
	if(pos>mid)return query(x*2+1,mid+1,r,pos);
}
int query2(int x,int l,int r,int pos){
	if(l==r){
		return tree[x].vis;
	}
	push_down(x,l,r);
	int mid=(l+r)/2;
	if(pos<=mid)return query2(x*2,l,mid,pos);
	if(pos>mid)return query2(x*2+1,mid+1,r,pos);
}
int lowbit(int x){
	return (-x)&x;
}
unordered_map<int,int>mp;
int sum[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	/*
	还有1:30 不太想写
	好像可以通过倒序处理的方式哦
	3.5小时的比赛T1 15-20min
	T2 40-60min
	T3 20-30min
	+dino 15min
	+surf 15min
	*/
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];	
	}
	for(int i=n;i>=1;i--){
//		cout<<mp[a[i]]<<endl;
//		if(mp[a[i]]!=0)cout<<i<<" "<<que(mp[a[i]])<<endl;
		if(mp[a[i]]!=0&&query2(1,1,n,mp[a[i]])>=1)mp[a[i]]=0;
//		cout<<mp[a[i]]<<endl;
		if(mp[a[i]]==0){
			mp[a[i]]=i;
			change(1,1,n,i,i,i);
		}else{
//			cout<<query(1,1,n,mp[a[i]])<<endl;
			change(1,1,n,i+1,mp[a[i]],-i);
			change2(1,1,n,i+1,mp[a[i]]);
			change(1,1,n,i,i,i);
//			cout<<query(1,1,n,i)<<endl;
			mp[a[i]]=i;
		}
	}
//	cout<<endl;
	for(int i=1;i<=n;i++){
		sum[a[i]]+=query(1,1,n,i);
//		cout<<query(1,1,n,i)<<" ";
	}
//	cout<<endl;
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
}