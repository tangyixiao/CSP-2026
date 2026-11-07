#include <bits/stdc++.h>
#define int long long
using namespace std;
inline int read(){
	int x=0,f=1,c=getchar();
	while(!isdigit(c)){if(c=='-')f=-1;c=getchar();}
	while(isdigit(c))x=x*10+c-48,c=getchar();
	return x*f;
}
const int MAXN=2e5+5;
pair<int,char> e[MAXN];
int n;
int L,l,r,sum;
int cha;
pair<int,char> ll,rr;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	n=read();
	for(int i=1;i<=n;++i){
		e[i].first=read();
		cin>>e[i].second;
	}
	l=1,r=n;
	ll=e[1];
	rr=e[n];
	if(ll.second!=rr.second)cha=min(ll.first,rr.first);
	while(l<r){
		//cout<<ll.first<<" "<<ll.second<<" "<<rr.first<<" "<<rr.second<<"\n";
		if(ll.second!=rr.second)sum+=cha;
		//cout<<cha<<" "<<sum<<"\n";
		//cout<<cha<<" "<<sum<<"\n";
		ll.first-=cha,rr.first-=cha;
		//cout<<ll.first<<" "<<rr.first<<"\n";
		if(ll.first==0)++l,ll=e[l];
		if(rr.first==0)--r,rr=e[r];
		cha=min(ll.first,rr.first);
	}
	printf("%lld",sum);
	return 0;
} 
