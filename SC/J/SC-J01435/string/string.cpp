#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct node{ll idx=0;char c;};
node G[200005],Q[200005]={0},H[200005]={0};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>G[i].idx>>G[i].c;
		Q[i]={Q[i-1].idx+G[i].idx,G[i].c};
	}
	for(int i=n;i>=1;i--)H[n-i+1]={H[n-i].idx+G[i].idx,G[i].c};
	int q=1,h=1;ll ans=0,lastq=0;//q,h is end's idx while lastq,lasth is start
	while(q<=n&&h<=n){
		ll tmp1=Q[q].idx,tmp2=H[h].idx;
		if(Q[q].c!=H[h].c){ans+=min(tmp1,tmp2)-lastq;}
		if(tmp1<tmp2){q++;lastq=tmp1;}
		if(tmp1>tmp2){h++;lastq=tmp2;}
		if(tmp1==tmp2){q++;h++;lastq=tmp1;}
	}
	cout<<ans/2;
	return 0;
}