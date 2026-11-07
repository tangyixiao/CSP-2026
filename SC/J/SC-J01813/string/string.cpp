#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 2e5 + 5;
ll n,a[N],vis[N],j,tot;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n,j=n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(ll i=1;i<j;i++){
		while(i<j&&a[i]>=a[j]){
			if(c[i]!=c[j]) tot+=a[j];
			a[i]-=a[j];
			a[j]=0;
			j--;
		}
		if(i<j&&a[i]){
			if(c[i]!=c[j]) tot+=a[i];
			a[j]-=a[i];
			a[i]=0;
		}
	}//自己跟自己一定同
	cout<<tot;
	return 0;
}