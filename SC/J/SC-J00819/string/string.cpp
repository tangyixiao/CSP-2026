#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+10;
int a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n; cin>>n;
	ll ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int posl=1,posr=n;
	while(posl<posr){
		ll forwd=min(a[posl],a[posr]);
		if(c[posl]!=c[posr]){
			ans+=forwd;
		}
		a[posl]-=forwd,a[posr]-=forwd;
		if(a[posl]==0)posl++;
		if(a[posr]==0)posr--;
	}
	cout<<ans;
	return 0;
}