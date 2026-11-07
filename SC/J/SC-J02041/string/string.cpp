#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+9;
ll a[N];
map<ll,char> c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,ans=0;
	cin>>n;
	ll post=0;
	for(ll i=1;i<=n;++i){
		cin>>a[i];
		char s;
		cin>>s;
		for(int j=1;j<=a[i];++j){
			c[++post]=s;
		}
	}
	for(int i=1;i<=post/2;++i){
		if(c[i]!=c[post-i+1])ans++;	
	}
	cout<<ans;
	return 0;
}