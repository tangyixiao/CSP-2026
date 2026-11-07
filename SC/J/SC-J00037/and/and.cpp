#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
ll n,m,a[N],Ml,ans;
string b[N],c[N];
priority_queue<string>q;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	for(ll i=1;i<=n;i++){
		ll L=0;
		while(a[i]>=1){
			b[i]+=a[i]%2+'0';
			a[i]/=2;
			L++;
		}
		Ml=max(Ml,L);
	}
	for(ll i=1;i<=n;i++){
		if(b[i].size()<Ml){
			for(ll j=Ml-b[i].size();j>=1;j--){
				b[i]+='0';
			}
		}
//		cout<<b[i]<<"\n";
	}
//	cout<<Ml;
	for(ll i=1;i<=n;i++){
		for(ll j=b[i].size()-1;j>=0;j--){
			c[i]+=b[i][j];
		}
	}
	for(ll i=1;i<=n;i++){
		q.push(c[i]);
	}
	for(ll i=1;i<=n;i++){
		c[i]=q.top();
		q.pop();
//		cout<<c[i]<<"\n";
	}
	for(ll i=0;i<Ml;i++){
		bool f=false;
		for(ll j=1;j<=m;j++){
			if(c[j][i]=='0'){
				f=true;
			}
		}
		if(!f)ans+=(1<<(Ml-i-1));
	}
	cout<<ans;
	return 0;
}