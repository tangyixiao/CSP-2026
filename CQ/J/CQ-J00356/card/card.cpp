#include<bits/stdc++.h>
typedef long long ll;
const bool islocal=0;
std::ifstream fin("card.in");
std::ofstream fout("card.out");
ll n,m,a,lasta,ans;
std::vector<ll>vec,v2;
ll p[500005],last[500005],stack[500005],vis[500005],km[500005];
std::bitset<500005>have;
int main(){
	std::cin.tie(nullptr)->sync_with_stdio(false);
	clock_t t0=clock();
	const ll limit=950;
	(islocal?std::cin:fin)>>n>>m>>lasta,v2.push_back(lasta);
	for(ll i=1,lst=0;i<n;i++){
		(islocal?std::cin:fin)>>a,vec.push_back(a);
		if(a==lasta)p[lst]++,km[i]=lst;
		else lasta=a,lst++,have[i]=1,v2.push_back(a);
	}
	if(v2.size()>5000){
		std::mt19937 rd(clock());
		ll rngsz=0;
		while(1){
			ll sz=0,i=km[rd()%n];
			for(ll j=i;j<(ll)v2.size();j++)if(~last[v2[j]]&&last[v2[j]]<sz&&stack[last[v2[j]]]==v2[j])sz=last[v2[j]]+1;else last[v2[j]]=sz,stack[sz++]=v2[j];
			for(ll j=0;j<sz;j++)vis[stack[j]]++;
			rngsz++;
			if(clock()-t0>limit)break;
		}
		for(ll i=1;i<=m;i++)(islocal?std::cout:fout)<<(vis[i]*n/rngsz)<<" \n"[i==m];
		return 0;
	}
	for(ll i=0;i<(ll)v2.size();i++){
		ll sz=0;
		for(ll j=i;j<(ll)v2.size();j++)if(~last[v2[j]]&&last[v2[j]]<sz&&stack[last[v2[j]]]==v2[j])sz=last[v2[j]]+1;else last[v2[j]]=sz,stack[sz++]=v2[j];
		for(ll j=0;j<sz;j++)vis[stack[j]]+=p[i]+1;
	}
	for(ll i=1;i<=m;i++)(islocal?std::cout:fout)<<vis[i]<<" \n"[i==m];
}
void zhapian(){
	//I'm luogu user 1754409(huang_hym)!
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
}

