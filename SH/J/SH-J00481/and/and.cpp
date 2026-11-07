#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool v[200020];
ll n,m,a[200020],cnt,ans;
ll read(){
	ll _a=0,_ne=1;
	char _c=getchar();
	while(!isdigit(_c)){
		if(_c=='-')_ne=-1;
		_c=getchar();
	}
	while(isdigit(_c)){
		_a=(_a<<3)+(_a<<1)+(_c^48);
		_c=getchar();
	}
	return _a*_ne;
}
void write(ll _a){
	if(_a<0){
		putchar('-');
		_a=-_a;
	}
	if(_a>9)write(_a/10);
	putchar(_a%10+'0');
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read();
	m=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
	}
	for(int i=30;i>=0;i--){
		cnt=0;
		for(int j=1;j<=n;j++){
			if(v[j])continue;
			if((a[j]>>i)&1)cnt++;
		}
		if(cnt<m)continue;
		ans+=1<<i;
		for(int j=1;j<=n;j++){
			if(((a[j]>>i)&1)==0)v[j]=1;
		}
	}
	write(ans);
	return 0;
}
