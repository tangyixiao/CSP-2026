#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FN "card"
int n,m,a[500005],ls[500005],to[500005],s[500005],ans[500005];
int main(){
	freopen(FN".in","r",stdin);
	freopen(FN".out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=1;
	}
	for(int i=n;i>0;i--){
		if(ls[a[i]])to[i]=ls[a[i]];
		ls[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		if(to[i]){
			s[to[i]]+=s[i];
		}else{
			ans[a[i]]+=s[i];
			s[i+1]+=s[i];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
/*
cost:10min?!

luogu:705446
//	freopen(FN".in","r",stdin);
//	freopen(FN".out","w",stdout);

wait for csp-s

*** 9:45 A.travel I find:
when 02 01D 02 01F is "1111" is not "1110" 
fixed it
*/
