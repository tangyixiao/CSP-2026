#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a,la,ans;
char c,lc;
vector<pair<ll,char>> vc;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		if(c==lc) la+=a;
		else{
			if(la) vc.push_back({la,lc});
			la=a,lc=c;
		}
	}
	vc.push_back({la,lc});
//	for(auto x:vc) cout<<x.first<<' '<<x.second<<'\n';
	int l=0,r=vc.size()-1;
	while(l<r){
		if(vc[l].second==vc[r].second){
			if(vc[l].first>vc[r].first){
				vc[l].first-=vc[r].first;
				r--;
			}
			else if(vc[r].first>vc[l].first){
				vc[r].first-=vc[l].first;
				l++;
			}
			else l++,r--;
		}
		else{
			if(vc[l].first>vc[r].first){
				ans+=vc[r].first;
				vc[l].first-=vc[r].first;
				r--;
			}
			else if(vc[r].first>vc[l].first){
				ans+=vc[l].first;
				vc[r].first-=vc[l].first;
				l++;
			}
			else{
				ans+=vc[r].first;
				l++,r--;
			}
		}
	}
	cout<<ans;
	return 0;
}

