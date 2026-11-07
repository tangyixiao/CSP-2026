#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+50;
ll n;
ll a[N];
char c[N];
struct node{
	ll l,r;
	char ch;
	ll len;
}e[N];
ll tot;
ll ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		if(c[i]!=c[i-1]){
			tot++;
			e[tot].l=e[tot-1].r+1;
			e[tot].r=e[tot].l+a[i]-1;
			e[tot].ch=c[i];
			e[tot].len=a[i];
		}else{
			e[tot].r+=a[i];
			e[tot].len+=a[i];
		}
	}
	ll lb=1,rb=tot;
	ll le=0;
	while(lb<rb){
		if(le+e[lb].len<le+e[rb].len){
			le+=e[lb].len;
			if(e[lb].ch!=e[rb].ch){
				ans+=e[lb].len;
			}
			e[rb].len-=e[lb].len;
			lb++;
		}else if(le+e[lb].len>le+e[rb].len){
			le+=e[rb].len;
			if(e[lb].ch!=e[rb].ch){
				ans+=e[rb].len;
			}
			e[lb].len-=e[rb].len;
			rb--;
		}else if(le+e[lb].len==le+e[rb].len){
			le+=e[lb].len;
			if(e[lb].ch!=e[rb].ch){
				ans+=e[lb].len;
			}
			lb++;
			rb--;
		}
	}
	cout<<ans;
	return 0;
}
