#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[200005],b[200005];
char c[200005],d[200005];
ll ans,s1[200005],s2[200005];
vector<ll> cut;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		b[n-i+1]=a[i];
		d[n-i+1]=c[i];
	}
	cut.push_back(0);
	for(int i=1;i<=n;i++){
		s1[i]=s1[i-1]+a[i];
		cut.push_back(s1[i]);
	}
	for(int i=1;i<=n;i++){
		s2[i]=s2[i-1]+b[i];
		cut.push_back(s2[i]);
	}
	sort(cut.begin(),cut.end());
	unique(cut.begin(),cut.end());
	for(int i=0;i<cut.size()-1;i++){
		if(cut[i]==s1[n])break;
		int pos1=upper_bound
				(s1+1,s1+n+1,cut[i])-s1;
		int pos2=upper_bound
				(s2+1,s2+n+1,cut[i])-s2;
		//cout<<pos1<<" "<<pos2<<endl;
		if(c[pos1]!=d[pos2])
			ans+=cut[i+1]-cut[i];
	}
	cout<<ans/2;
	return 0;
}
/*
4
1 a
1 c
1 b
2 c
*/
