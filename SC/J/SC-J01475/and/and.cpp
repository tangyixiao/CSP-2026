#include<bits/stdc++.h>
#define AC return 0
using namespace std;
using ll=long long;
bool u[32];
struct jjb{
	bool p[32];
};
ll f(ll d,ll z){
	ll ans=1;
	//cout<<"#\n";
	for(int i=1;i<=z;i++)ans*=d;
	return ans;
}bool cmp(const jjb&x,const jjb&y){
	for(int i=31;i>=1;i--){
		if(u[i]==false)continue;
		if(x.p[i]!=y.p[i])return x.p[i];
	}
	return true;
}int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	int n,m;cin>>n>>m;vector<int>a(n+1);vector<jjb>d(n+1);
	ll sum=0;
	for(int i=1;i<=n;i++){
		int t,j=1;cin>>t;
		while(t){
			if(t%2==1)d[i].p[j]=true;
			t/=2,j++;
		}
	}for(int j=1;j<=31;j++){
		int ans=0;
		for(int i=1;i<=n;i++)if(d[i].p[j]==true)ans++;
		if(ans>=m)u[j]=true;
	}
	sort(begin(d)+1,end(d),cmp);
	/*for(int i=1;i<=n;i++){
		for(int j=31;j>=1;j--)cout<<d[i].p[j];
		cout<<'\n';
	}*/
	for(int j=1;j<=31;j++){
		bool q=true;
		for(int i=1;i<=m;i++){
			if(d[i].p[j]==false){q=false;break;}
		}if(q)sum+=f(2,j-1);
	}cout<<sum;
	/*for(int j=1;j<=6;j++){
		int ans=0;
		for(int i=1;i<=n;i++){
			if(d[i].p[j]==true)ans++;
		}cout<<j<<' '<<ans<<'\n';
		if(ans>=m){
			sum+=f(2,j);
			//cout<<j<<'\n';
		}
	}cout<<sum;*/
	AC;
}