#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
ll n,ans=0;
struct edge {
	ll sum,cnt;
	char c;
} a[N];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1; i<=n; i++) {
		cin>>a[i].sum>>a[i].c;
		a[i].cnt=a[i].sum;
	}
	ll j=n;
	for(ll i=1; i<=n; i++) {
		if(i>=j)break;
		for(ll s=j;i<=s;s--) {
			if(a[i].c!=a[s].c) {
				if(a[s].cnt>=a[i].cnt) {
					ans+=a[i].cnt;
					a[s].cnt-=a[i].cnt;
					a[i].cnt=0;
					if(a[s].cnt>a[i].cnt) j=s;
					else j=s-1; 
					break;
				} else {
					ans+=a[s].cnt;
					a[s].cnt=0;
					a[i].cnt-=a[s].sum;
				}
			} else {
				if(a[s].cnt>=a[i].cnt) {
					a[s].cnt-=a[i].cnt;
					a[i].cnt=0;
					if(a[s].cnt>a[i].cnt) j=s;
					else j=s-1;
					break;
				} else {
					a[s].cnt=0;
					a[i].cnt-=a[s].sum;
				}
			}
		}
	}
	cout<<ans;
	return 0;
} //肯定是大样例不对，我的一等啊
//我花两个小时做了个滚木
//空悲切 RP++
