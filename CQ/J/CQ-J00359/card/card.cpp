#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=5e5+10;
const int M=3e5+10;
int a[N];
int t[N];
int ans[N];
int lst[M];
int nxt[N];
int Lowbit(int i){
	return i&(-i);
}
void Insert(int x,int d){
	for(int i=x;i<=n;i+=Lowbit(i)) t[i]+=d;
}
int Getsum(int x){
	int ret=0;
	for(int i=x;i;i-=Lowbit(i)) ret+=t[i];
	return ret;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) Insert(i,1);
	for(int i=n;i>0;i--){
		if(lst[a[i]]) nxt[i]=lst[a[i]];
		lst[a[i]]=i; 
	}
	for(int i=1;i<=n;i++){
		if(nxt[i]){
			int L=i,R=nxt[i];
			int d=Getsum(i);
			Insert(L,-d);
			Insert(R,d);
		}
		else ans[a[i]]=Getsum(i); 
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i<m) cout<<' ';
	}
	return 0;
}

