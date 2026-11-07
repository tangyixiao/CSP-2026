#include<bits/stdc++.h>
using namespace std;
long long ans[50100],n,m,cards[50100],types[50100];
int cnt[50100];
bool fn[50100];
void method1(){
	for(int i=1;i<=n;++i){
		cin>>cards[i];
		cnt[cards[i]]=i;
	}
	for(int i=1;i<=n;++i){
		memset(fn,false,sizeof(fn));
		int j=i,tol=n-i+1;
		while(j<=n){
			int cur=cards[j];
			if(cnt[cur]>j){
				tol-=(cnt[cur]-j);
				j=cnt[cur];
			}
			if(fn[cur]==false) ++ans[cur];
			fn[cur]=true;
			j++;
		}
	}
	for(int i=1;i<=m;++i){
		cout<<ans[i]<<' ';
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	method1();
	return 0;
}
