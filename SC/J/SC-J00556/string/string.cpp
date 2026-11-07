#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf=1e17;
const int N=2e5;
char c[N+2];
ll x[N+2];
ll ax[N],bx[N];//x大小 
char ac[N],bc[N]; //c字母 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	ll len=0;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>c[i];
		len+=x[i];
	}
	ll slen=0,l=1;
	while(slen+x[l]<=len/2){
		slen+=x[l],ax[l]=slen,ac[l]=c[l],l++;
	}
	if(len/2!=slen) ax[l]=len/2-slen,ac[l]=c[l],l++;
	ax[l]=inf,ac[l]='K';
	//for(int i=1;i<=l;i++) cout<<ax[i]<<" ";
	//cout<<"\n";
	l=n,slen=0;
	while(slen+x[l]<=len/2){
		slen+=x[l],bx[n-l+1]=slen,bc[n-l+1]=c[l],l--;
	}
	if(len/2!=slen) bx[n-l+1]=len/2-slen,bc[n-l+1]=c[l],l--;
	bx[n-l+1]=inf,bc[n-l+1]='K';
	//for(int i=1;i<=n-l+1;i++) cout<<bx[i]<<" ";
	//cout<<"\n";
	ll ans=0;slen=0;
	int al=1,bl=1;
	while(slen<len/2){
		if(ac[al]!=bc[bl]) ans+=(min(ax[al],bx[bl])-slen);
		if(ax[al]<bx[bl]) slen=ax[al++];
		else if(ax[al]>bx[bl]) slen=bx[bl++];
		else slen=ax[al++],bl++;
	}
	cout<<ans;
	return 0;
} 
/*
3
5 a
3 b
3 a
*/