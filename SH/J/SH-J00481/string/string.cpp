#include<bits/stdc++.h>
#define ll long long
using namespace std;
char c[200020];
ll n,a[200020],ans;
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
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	n=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
		scanf("%c",&c[i]);
	}
	for(int i=1,j=n;i<=j&&j>=1;){
		if(a[i]>=a[j]){
			if(c[i]!=c[j])ans+=a[j];
			a[i]-=a[j];
			j--;
		}
		else{
			if(c[i]!=c[j])ans+=a[i];
			a[j]-=a[i];
			i++;
		}
	}
	write(ans);
	return 0;
}
