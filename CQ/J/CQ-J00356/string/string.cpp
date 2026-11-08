#include<bits/stdc++.h>
typedef long long ll;
const bool islocal=0;
std::ifstream fin("string.in");
std::ofstream fout("string.out");
ll n,a,sum;
char c;
std::vector<std::pair<ll,char>>vec;
int main(){
	std::cin.tie(nullptr)->sync_with_stdio(false);
	(islocal?std::cin:fin)>>n;
	for(ll i=0;i<n;i++)(islocal?std::cin:fin)>>a>>c,vec.push_back({a,c}),sum+=a;
	if(sum&1){
		ll mid=sum/2+1,ans=0,prev=0,i=0;
		while(prev<mid)prev+=vec[i].first,i++;
		i--;
//		std::cerr<<i<<' '<<prev<<'\n';
		ll prv=i-1,nxt=i+1,psm=mid-prev+vec[i].first-1,nsm=prev-mid;
		while(prv>=0&&nxt<n){
			if(psm>nsm){
				ll lsm=nsm;
				nsm+=vec[nxt].first,ans+=(std::min(nsm,psm)-lsm)*(vec[nxt].second!=vec[prv+1].second),nxt++;
			}else{
				ll lsm=psm;
				psm+=vec[prv].first,ans+=(std::min(nsm,psm)-lsm)*(vec[nxt-1].second!=vec[prv].second),prv--;
			}
//			std::cerr<<prv<<' '<<nxt<<':'<<psm<<' '<<nsm<<' '<<ans<<'\n';
		}
		while(prv>=0)ans+=vec[prv].first*(vec[n-1].second!=vec[prv].second),prv--;
		while(nxt<n)ans+=vec[nxt].first*(vec[0].second!=vec[nxt].second),nxt++;
		(islocal?std::cout:fout)<<ans;
	}else{
		ll mid=sum/2,ans=0,prev=0,i=0;
		while(prev<mid)prev+=vec[i].first,i++;
		i--;
//		std::cerr<<i<<' '<<prev<<'\n';
		ll prv=i-1,nxt=i+1,psm=mid-prev+vec[i].first,nsm=prev-mid;
		while(prv>=0&&nxt<n){
			if(psm>nsm){
				ll lsm=nsm;
				nsm+=vec[nxt].first,ans+=(std::min(nsm,psm)-lsm)*(vec[nxt].second!=vec[prv+1].second),nxt++;
			}else{
				ll lsm=psm;
				psm+=vec[prv].first,ans+=(std::min(nsm,psm)-lsm)*(vec[nxt-1].second!=vec[prv].second),prv--;
			}
//			std::cerr<<prv<<' '<<nxt<<':'<<psm<<' '<<nsm<<' '<<ans<<'\n';
		}
		while(prv>=0)ans+=vec[prv].first*(vec[n-1].second!=vec[prv].second),prv--;
		while(nxt<n)ans+=vec[nxt].first*(vec[0].second!=vec[nxt].second),nxt++;
		(islocal?std::cout:fout)<<ans;
	}
}
void zhapian(){
	//I'm luogu user 1754409(huang_hym)!
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
}
//time:~45 minutes
