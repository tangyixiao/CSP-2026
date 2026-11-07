#include <bits/stdc++.h>
#define ll long long
using namespace std;
const long long N=200005;
ll n,a[N],ch[N],i,ans,l,r;
void read(ll&a){
	ll x=0,f=1;
	char c;
	c=getchar();
	while(c>'9' || c<'0'){
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c<='9' && c>='0'){
		x*=10;
		x+=c-'0';
		c=getchar();
	}
	a=x*f;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++){
		char c;
		read(a[i]);
		cin>>c;
		ch[i]=c-'a'+1;
	}
	l=1;
	r=n;
	while(1){
		if(ch[l]!=ch[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				ans+=a[r];
				a[r]=0;
			}
			else{
				a[r]-=a[l];
				ans+=a[l];
				a[l]=0;
			}
		}
		else {
			if(a[l]>a[r]){
				a[l]-=a[r];
				a[r]=0;
			}
			else{
				a[r]-=a[l];
				a[l]=0;
			}
		}
		if(a[l]==0){
			l++;
		}
		if(a[r]==0){
			r--;
		}
		if(l>=r){
			break;
		}
	}
	cout<<ans;
	return 0;
}