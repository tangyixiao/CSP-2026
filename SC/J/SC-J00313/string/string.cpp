#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int x[N];char c[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>c[i],sum+=x[i];
	}vector<pair<int,char>> tmp;
//	if(sum&1){
		int now=0;
		for(int i=1;i<=n;i++){
			if(now+x[i]>sum/2){
				int cnt=(sum/2)-now;
				if(cnt!=0) tmp.push_back({cnt,c[i]}),x[i]-=cnt+(sum&1);
				for(int j=i;j<=n;j++) tmp.push_back({x[j],c[j]});
				break;
			}else tmp.push_back({x[i],c[i]}),now+=x[i];
		}now=0;
	int r=tmp.size()-1,ans=0;
	for(int i=0;i<tmp.size();i++){
		if(now+tmp[i].first>sum/2) break;
		while(tmp[i].first){
			if(tmp[i].first<tmp[r].first) ans+=(tmp[i].second!=tmp[r].second)*tmp[i].first,tmp[r].first-=tmp[i].first,tmp[i].first=0;
			else ans+=(tmp[i].second!=tmp[r].second)*tmp[r].first,tmp[i].first-=tmp[r].first,tmp[r].first=0,r--;
		}
	}cout<<ans;
//	}
	return 0;
}