#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2e5+9;
ll n,ans,l=1,r;
struct str{
	ll a;char c;
}st[N],le,ri; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++) cin>>st[i].a>>st[i].c;
	r=n;le=st[1],ri=st[n];
	while(l<=r){
		if(le.c==ri.c){
			if(le.a==ri.a){
				le=st[++l],ri=st[--r];}
			else if(le.a>ri.a){
				le.a-=ri.a;ri=st[--r];}
			else {ri.a-=le.a;le=st[++l];}
		}else{
			if(le.a==ri.a){
				ans+=le.a;le=st[++l],ri=st[--r];
			}else if(le.a>ri.a){
				le.a-=ri.a;ans+=ri.a;ri=st[--r];
			}
			else {ri.a-=le.a;ans+=le.a;le=st[++l];
			}
		}
	}
	cout<<ans;
	return 0;
}
