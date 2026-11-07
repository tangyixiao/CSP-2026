#include<bits/stdc++.h>
using namespace std;
#define fo(i,begin,end) for(int i=begin;i<=end;++i)
const int N=2e5+5;
int n,m,a;
vector<int> v,tmp,sh;
map<int,int> ans;
map<int,bool> mp;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	fo(i,1,n) cin>>a,v.push_back(a);
	while(n--){
		sh.clear();
		tmp.clear();
		mp.clear();
		bool ppp=0;
		for(auto j:v){
			if(!ppp) ppp=1;
			sh.push_back(j);
		}
		v.clear();
		for(auto j:sh){
			if(mp[j]){
				bool ok=0;
				vector<int> na;
				for(int k:tmp){
					if(k==j) ok=1;
					if(ok) v.push_back(k);
					if(!ok) na.push_back(k);
				}
				tmp=na;
			}
			mp[j]=1;
			tmp.push_back(j);
		}
		for(auto j:tmp){
			v.push_back(j);
			ans[j]++;
		}
	}
	fo(i,1,m) cout<<ans[i]<<" ";
	return 0;
}