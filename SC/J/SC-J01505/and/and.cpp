#include<bits/stdc++.h>
using namespace std;
long long a[200005],n,m,b[200005],ans;
string s[200005],r;
void sb(long long x,long long i){
	string t;
	while(x>0){
		t+=(x%2+'0');
		x/=2;
	}
	s[i]=t;
	return ;
}
void resb(string t){
	long long tt=1;
	for(int i=0;i<t.size();i++){
		ans+=(t[i]-'0')*tt;
		tt*=2;
	}
	return ;
}
void solve(long long x,long long d){
	if(d==0)return ;
	long long t=0,tt=x+1;
	for(int i=1;i<=x;i++){
		if(s[b[i]].size()<d){
			tt=i;
			break;
		}
		if(s[b[i]][d-1]=='1')t++;
	}
	if(t<m){
		r='0'+r;
		solve(x,d-1);
	}
	else{
		int k=0;
		r='1'+r;
		for(int i=1;i<tt;i++){
			if(s[b[i]][d-1]==1)b[++k]=b[i];
		}
		solve(t,d-1);
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		b[i]=i;
	}
	sort(a+1,a+n+1,greater<int>());
	for(int i=1;i<=n;i++){
		sb(a[i],i);
	}
	solve(n,s[1].size());
	resb(r);
	printf("%lld",ans);
	return 0;
}