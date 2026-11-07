#include<bits/stdc++.h>
using namespace std;
long long n,len[200005],l[200005],r[200005];
long long su,le,ri,lm,rm,ans;
char c[200005],lc,rc;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>len[i]>>c[i];
		l[i]=su+1,r[i]=su+len[i];
		su+=len[i]; 
	}
	le=0,ri=n+1;
	while(le<ri){
		if(lm==0)lm+=len[++le],lc=c[le];
		if(rm==0)rm+=len[--ri],rc=c[ri];
		if(lc!=rc)ans+=min(lm,rm);
		long long s=min(lm,rm);
		lm-=s,rm-=s;
	}
	cout<<ans;
	return 0; 
} 