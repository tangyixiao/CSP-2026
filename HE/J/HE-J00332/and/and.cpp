#include<bits/stdc++.h>
using namespace std;
int n,m;
const int MAXN=2e5+800;
long long ask[MAXN];
bool sid[MAXN];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>ask[i];
	}
	long long ans=0;
	for(int p=30;p>=0;--p){
		int op=0;
		for(int i=1;i<=n;++i)
			if(sid[i]==0&&(ask[i]&(1ll<<p))) op++;
		if(op>=m){ans=ans+(1ll<<p);}
		if(op>=m){
			for(int i=1;i<=n;++i)
				if(sid[i]==0&&(ask[i]&(1ll<<p))==0) sid[i]=1;
		}
	}
	cout<<ans;
	return 0;
}
