#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,a,cnt1,cnt2,m,t;
long long ans;
long long pre[N],edg[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c[i];
		pre[i]=pre[i-1]+a;
	}
	for(int i=1;i<=n;i++){
		edg[i]=pre[n]-pre[n-i];
	}
	cnt1=1;
	cnt2=1;
	while(cnt1+cnt2<=n){
		t=min(pre[cnt1],edg[cnt2]);
		if(c[cnt1]!=c[n+1-cnt2]) ans+=(t-m);
		if(pre[cnt1]>edg[cnt2]) cnt2++;
		else if(pre[cnt1]<edg[cnt2]) cnt1++;
		else{
			cnt1++;
			cnt2++;
		}
		m=t;
	}
	cout<<ans;
	return 0;
}