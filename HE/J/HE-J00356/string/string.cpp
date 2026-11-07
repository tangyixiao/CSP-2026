#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,tot,cnt,jishu,ans;
bool f=false;
struct Node{
	ll x;
	char c;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
		tot+=a[i].x;
	}
	tot/=2;
	cnt=n;
	for(int i=1;i<=n;i++){
		int y=a[i].x;
		jishu+=a[i].x;
		if(jishu>tot) y-=(jishu-tot),f=true;
		int z=0;
		while(z<y){
			if(z+a[cnt].x>=y){
				a[cnt].x-=(y-z);
				if(a[cnt].c!=a[i].c){
					ans+=(y-z);
				}
				break;
			}
			if(a[cnt].c!=a[i].c){
				ans+=a[cnt].x;
			}
			z+=a[cnt].x;
			cnt--;
		}
		if(f) break;
	}
	cout<<ans;
	return 0;
}
