#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int nxt[N],p[N],a[N],k[M],b[2][M];
int n,m;
void work(int s){
//	memset(k,0,sizeof(k));
	int p=s;
//	cout<<p<<' ';
	for(;;){
//		bool flag=1;
		while(nxt[p]){
			p=nxt[p];
//			flag=0;
//			cout<<p<<' '; 
		}
		k[a[p]]++;
//		cout<<endl<<"p "<<p<<" kind "<<a[p]<<' '<<"数量 "<<k[a[p]]<<endl;
		if(p+1<=n){
			p++;
			if(!nxt[p])k[a[p]]++;
//			cout<<endl<<"p "<<p<<" kind "<<a[p]<<' '<<"数量 "<<k[a[p]]<<endl;
//			cout<<p<<' ';
		}
		if(p==n){
			break;
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.put","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(p[a[i]]){
			nxt[p[a[i]]]=i;
		}
		p[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		work(i);
//		cout<<endl;
//		for(int i=1;i<=m;i++){
//			cout<<k[i]<<' ';
//		} 
//		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<k[i]<<' ';
	}
	return 0;
}