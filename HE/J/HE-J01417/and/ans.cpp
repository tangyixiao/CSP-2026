#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=200005,logm=31;
ll a[N];
ll n,m;
ll ans=0;
ll cnt;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=0;i<n;i++) cin>>a[i];
	for(ll idx=logm;idx>=0;idx--){
		cnt=0;
		ans+=(1<<idx);//用ans存储已经选定的idx
		for(ll i=0;i<n;i++) if((a[i]&ans)==ans) cnt++;
		if(cnt<m) ans-=(1<<idx);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	//too easy
	//even easier than T2 
	//just catch from high to low
	//beautiful
	//O(nlogn)
	return 0;
}
