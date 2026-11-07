#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxn=2e5+7;
ll n,l,r,ans=0;
pair<ll,char> a[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].first>>a[i].second;
	}
	l=1,r=n;
	for(;l<=r;){  // O(n)
		if(a[l].first>a[r].first){
			a[l].first-=a[r].first;
			if(a[l].second!=a[r].second) ans+=a[r].first;
			r--;
		}
		if(a[l].first<a[r].first){
			a[r].first-=a[l].first;
			if(a[l].second!=a[r].second) ans+=a[l].first;
			l++;
		}
		if(l==r) break;
		if(a[l].first==a[r].first){
			if(a[l].second==a[r].second){
				l++;
				r--;
			}else{
				ans+=a[l].first;
				l++;
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
}