#include<bits/stdc++.h>
#define M ((L+R)>>1)
#define ls (u<<1)
#define rs (u<<1|1)
using namespace std;
const int N=1e6+5;
const int inf=0x7f7f7f7f;
int cnt1[N],cnt2[N];
int lst[N];
int a[N];
int n;
struct SegmentTree_add{
	int w[N<<2];
	int tag[N<<2];
	void pushup(int u){
		w[u]=w[ls]+w[rs];
	}
	void maketag(int u,int len,int x){
		w[u]+=len*x;
		tag[u]+=x;
	}
	void pushdown(int u,int L,int R){
		maketag(ls,(M-L+1),tag[u]);
		maketag(rs,(R-M),tag[u]);
		tag[u]=0;
	}
	bool inrange(int L,int R,int l,int r){
		return (L>=l)&&(R<=r);
	}
	bool outofrange(int L,int R,int l,int r){
		return (R<l)||(L>r);
	}
	void update(int u,int L,int R,int l,int r,int x){
		if(inrange(L,R,l,r))maketag(u,(R-L+1),x);
		else if(!outofrange(L,R,l,r))pushdown(u,L,R),update(ls,L,M,l,r,x),update(rs,M+1,R,l,r,x),pushup(u);
	}
	int qry(int u,int L,int R,int l,int r){
		if(inrange(L,R,l,r))return w[u];
		else if(!outofrange(L,R,l,r)){pushdown(u,L,R);return qry(ls,L,M,l,r)+qry(rs,M+1,R,l,r);}
		else return 0; 
	}
	void init(){memset(w,0,sizeof w),memset(tag,0,sizeof tag);}
};
struct SegmentTree_set{
	int w[N<<2];
	int tag[N<<2];
	void pushup(int u){
		w[u]=w[ls]+w[rs];
	}
	void maketag(int u,int len,int x){
		w[u]=len*x;
		tag[u]=x;
	}
	void pushdown(int u,int L,int R){
		if(tag[u]==inf)return;
		maketag(ls,(M-L+1),tag[u]);
		maketag(rs,(R-M),tag[u]);
		tag[u]=inf;
	}
	bool inrange(int L,int R,int l,int r){
		return (L>=l)&&(R<=r);
	}
	bool outofrange(int L,int R,int l,int r){
		return (R<l)||(L>r);
	}
	void update(int u,int L,int R,int l,int r,int x){
		if(inrange(L,R,l,r))maketag(u,(R-L+1),x);
		else if(!outofrange(L,R,l,r))pushdown(u,L,R),update(ls,L,M,l,r,x),update(rs,M+1,R,l,r,x),pushup(u);
	}
	int qry(int u,int L,int R,int l,int r){
		if(inrange(L,R,l,r))return w[u];
		else if(!outofrange(L,R,l,r)){pushdown(u,L,R);return qry(ls,L,M,l,r)+qry(rs,M+1,R,l,r);}
		else return 0; 
	}
	void init(){memset(w,0,sizeof w),memset(tag,0x7f,sizeof tag);}
};
SegmentTree_set tr;
int m;
int ans[N];
struct Segment{
	int l,r;
	Segment(){}
	Segment(int _l,int _r):l(_l),r(_r){}
	friend bool operator<(const Segment&__x,const Segment&__y){return __x.l<__y.l;}
	friend bool operator>(const Segment&__x,const Segment&__y){return __x.l>__y.l;}
};
vector<Segment>s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		lst[a[i]]=i;
	}
//	for(int i=1;i<=n;i++)cout<<i<<":"<<lst[i]<<"\n";
//	for(int i=1;i<=n;i++)if(lst[a[i]]-i>=2)tr.update(1,1,n,i+1,lst[a[i]]-1,1),cout<<i+1<<" "<<lst[a[i]]-1<<"\n";
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++)if(lst[j]>=i)if(!tr.qry(1,1,n,lst[j],lst[j]))ans[j]++;
//		if(lst[a[i]]-i>=2)tr.update(1,1,n,i+1,lst[a[i]]-1,1),cout<<":"<<i+1<<" "<<lst[a[i]]-1<<"\n";
//	}
//	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
//	for(int i=1;i<=n;i++)if(lst[a[i]]-i>=2)tr.update(1,1,n,i+1,lst[a[i]]-1,i),cout<<i+1<<" "<<lst[a[i]]-1<<"\n";
//	for(int i=1;i<=m;i++){
//		cout<<lst[i]-tr.qry(1,1,n,lst[i],lst[i])<<" ";
//	}
	if(n<=500){
		for(int i=1;i<=n;i++){
			vector<int>p;
			for(int j=i;j<=n;j++){
				int f=p.size();
				for(int k=0;k<(int)p.size();k++){
					if(p[k]==a[j]){
						f=k;
						break;
					}
				}
				p.resize(f);
				p.push_back(a[j]);
			}
			for(int j=0;j<(int)p.size();j++)ans[p[j]]++;
		}
		for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	}else{
		tr.init();
		for(int i=1;i<=n;i++)if(lst[a[i]]-i>=2)tr.update(1,1,n,i+1,lst[a[i]]-1,i),cout<<i+1<<" "<<lst[a[i]]-1<<"\n";
		for(int i=1;i<=m;i++)cout<<lst[i]-tr.qry(1,1,n,lst[i],lst[i])<<" ";
	}
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
  ________
    _____________
      ___
        _________
          _
            ___
                _
1 2 3 4 5 6 7 8 9 10        

题看错了 c 


5min做完T1
T2调了1.5h
T3做了5min
T4题看错了 ,浪费1.5h 

诈骗一下:
//freopen
feropen
freopen(".in","r",stdin);
freopen("card4.in","r",stdin);
bits\stdc++.h
mian()
namepsace
namesapce

*/
