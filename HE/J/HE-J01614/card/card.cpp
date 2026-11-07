#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[500010],ls[500010],stk[500010],ans[500010],h[500010],c[500010],t[500010];
bool cmp(int x,int y){
	return h[x]<h[y];
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>=1;i--){
		if(!h[a[i]])h[a[i]]=i;
		c[a[i]]++;
	}
	for(int i=1;i<=m;i++)t[i]=i;
	sort(t+1,t+m+1,cmp);
	for(int i=1;i<=m;i++){
		int x=t[i];
		c[a[h[x]+1]]+=c[x];
	}
//	for(int i=1;i<=n;i++){
//		int x=i;
//		while(x<=n){
//			ans[a[x]]++;
//			x=h[a[x]]+1;
//		}
//		for(int j=1;j<=m;j++)ls[j]=0;
//		int tp=0;
//		for(int j=i;j<=n;j++){
//			if(!ls[a[j]])stk[++tp]=j,ls[a[j]]=j;
//			else{
//				while(tp&&a[stk[tp]]!=a[j])ls[a[stk[tp]]]=0,tp--;
//				stk[tp]=j,ls[a[j]]=j;
//			}
////			cout<<i<<","<<j<<"\n"; 
////			for(int x=1;x<=tp;x++)cout<<stk[x]<<" ";
////			cout<<"\n";
//		}
		
//		for(int j=1;j<=tp;j++)cout<<a[stk[j]]<<" ";
//		cout<<"\n";
//		for(int j=1;j<=tp;j++)ans[a[stk[j]]]++;
//	}
	for(int i=1;i<=m;i++)cout<<c[i]<<' ';
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
