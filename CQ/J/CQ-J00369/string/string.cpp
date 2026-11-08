#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,ll,ans,a[200010],s[200010];
char c[200010];
pair<int,int> find(int x){
	int id=lower_bound(s+1,s+1+n,x)-s;
	return {id,x-s[id-1]};
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		ll+=a[i],s[i]=s[i-1]+a[i];
	}
	int L=ll/2,R=L+ll%2+1;
	pair<int,int> l=find(L),r=find(R);
	while(l.first){
		int lg=l.second,rg=a[r.first]-r.second+1,go=min(lg,rg);
		if(c[l.first]!=c[r.first]) ans+=go;
		l.second-=go,r.second+=go;
		if(l.second==0) l.first--,l.second=a[l.first];
		if(r.second>a[r.first]) r.first++,r.second=1;
	}
	cout<<ans;
	return 0;
}
