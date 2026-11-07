#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct k{
	ll num=0;char let;
};
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,i=1,l=1,ans=0;
	cin>>n;
	ll j=n;
	vector<k> s(n+5);s[0].num=0;
	for(int i=1;i<=n;i++){
		cin>>s[i].num>>s[i].let;
		s[i].num+=s[i-1].num;
	}ll r=s[n].num;
	while(l<=r&&j>i){
		ll lef=s[i].num-l+1;
		ll rig=r-s[j-1].num;
		if(lef<rig){
			r-=lef;
			l+=lef;
			if(s[i].let!=s[j].let)ans+=lef;
			i++;
		}else if(lef==rig){
			r-=rig;
			l+=rig;
			if(s[i].let!=s[j].let)ans+=rig;
			i++;
			j--;
		}else {
			r-=rig;
			l+=rig;
			if(s[i].let!=s[j].let)ans+=rig;
			j--;
		}
	}cout<<ans;
	return 0;
}