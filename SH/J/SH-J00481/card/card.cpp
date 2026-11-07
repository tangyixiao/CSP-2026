#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool v[500050];
ll n,m,a[500050],ans[300030],la[300030],ne[500050];
vector<ll> cv;
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
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read();
	m=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
	}
	for(int i=n;i>=1;i--){
		if(!la[a[i]])la[a[i]]=i;
		ne[i]=la[a[i]];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<cv.size();j++)v[cv[j]]=0;
		cv.clear();
		int j=i;
		while(j<=n){
			if(!v[a[j]]){
				ans[a[j]]++;
				v[a[j]]=1;
				cv.push_back(a[j]);
			}
			if(ne[j]==j)j++;
			else j=ne[j];
		}
	}
	for(int i=1;i<=m;i++){
		write(ans[i]);
		putchar(' ');
	}
	return 0;
}
/*
6 4
1 2 1 4 3 1
6 1 2 1
*/
