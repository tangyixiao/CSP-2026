#include <bits/stdc++.h>
using namespace std;
long long s[200005][27],w[200005];
long long n,u,tp,dw,a;
char b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (long long i=1;i<=n;i++){
		cin>>a>>b;
		b-=96;
		s[i][b]=a;
		w[i]=b;
	}
	tp=1;
	dw=n;
	while(tp<dw){
		if(w[tp] != w[dw]){
			u+=min(s[tp][w[tp]],s[dw][w[dw]]);
		}
		if(s[tp][w[tp]]>s[dw][w[dw]]){
			s[tp][w[tp]]-=s[dw][w[dw]];
			dw--;
		}
		else if(s[tp][w[tp]]<s[dw][w[dw]]){
			s[tp][w[tp]]-=s[dw][w[dw]];
			tp++;
		}
		else{
			tp++;
			dw--;
		}
	}
	cout<<u;
} 