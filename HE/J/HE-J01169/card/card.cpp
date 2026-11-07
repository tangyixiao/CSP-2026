#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,c,a[200005],b[200005],js[505][505];
map<ll,ll> m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>c;
	for(int i=1;i<=n;i++) cin>>a[i];
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			m[a[j]]++;
			if(m[a[j]]>=2){
				while(b[cnt]!=a[j]) b[cnt]=0,cnt--;
				m.clear();
				for(int g=1;g<=cnt;g++) m[b[g]]++;
			}
			b[++cnt]=a[j];
		}
		while(cnt--) js[i][b[cnt]]++,b[cnt]=0;
	}
	for(int i=1;i<=n;i++){
		ll cnt=0;
		for(int j=1;j<=c;j++){
			cnt+=js[j][i];
		}
		cout<<cnt<<' ';
	}
	return 0;
}
