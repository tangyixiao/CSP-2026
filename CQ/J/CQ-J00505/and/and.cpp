#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
constexpr int N=2e5+5;
ll n,m,a[N],ls[N][35],top[N],js[N],top2,js2[N],top3;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		int j=a[i];
		while(j){
			ls[i][++top[i]]=j%2;
			j/=2;
		}
		js[i]=i;
	}
	top2=n;
	for(int i=32;i>=0;--i){
		ll ks=0; 
		for(int j=1;j<=top2;++j){
			if(ls[js[j]][i+1])++ks;
		}
		if(ks>=m){
			top3=0;
			for(int j=1;j<=top2;++j){
				if(ls[js[j]][i+1])js2[++top3]=js[j];
			}
			top2=top3;
			for(int j=1;j<=top2;++j)js[j]=js2[j];
		}
	}
	ll res=a[js[1]];
	for(int i=2;i<=m;++i){
		res=res&a[js[i]]; 
	}
	cout<<res<<"\n";
	return 0;
}

