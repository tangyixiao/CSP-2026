#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+5;
ll n,ans,l,q;
pair<ll,char> a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].first>>a[i].second;
	for(int i=1,j=n;i<j;){
		if(l==0){
			if(a[i].second!=a[j].second) ans+=min(a[i].first,a[j].first);
			if(a[i].first<a[j].first){
				l=a[j].first-a[i].first;
				i++;q=1;
			}else if(a[i].first==a[j].first) l=0,i++,j--;
			else{
				l=a[i].first-a[j].first;
				j--;q=2;
			}
		}else if(q==1){
			if(a[i].second!=a[j].second) ans+=min(a[i].first,l);
			if(a[i].first<l){
				l=l-a[i].first;
				i++;q=1;
			}else if(a[i].first==l) l=0,i++,j--;
			else{
				l=a[i].first-l;
				j--;q=2;
			}
		}else if(q==2){
			if(a[i].second!=a[j].second) ans+=min(a[j].first,l);
			if(a[j].first>l){
				l=a[j].first-l;
				i++;q=1;
			}else if(a[j].first==l) l=0,i++,j--;
			else{
				l=l-a[j].first;
				j--;q=2;
			}
		}
	}
	cout<<ans;
	return 0;
}