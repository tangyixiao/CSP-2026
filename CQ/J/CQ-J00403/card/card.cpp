#include <bits/stdc++.h>
using namespace std;
struct node{
	int o,h;
};
int cnt,y,n,m,a[500005],ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	bool f=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	if(a[i]<a[i-1]) f=0;
	} 
	for(int i=2;i<=n;i++) if(a[i]!=a[i-1]) y++;
	if(f){
		for(int i=2;i<=n;i++){
			if(a[i]>a[i-1]) cout<<i-1<<' ';
			if(i==n) cout<<i;
		}
		return 0;
	}
	if(m<=2){
		for(int i=1;i<=n;i++) if(a[i]==1) cnt++;
		if(a[n]==1){
			cout<<n<<' '<<n-cnt;
		}else{
			cout<<cnt<<' '<<n;
		}
		return 0;
	}
	if(y<=5000){
		vector<node> u;
		u.push_back({a[1],1});
		for(int i=2;i<=n;i++){
			if(a[i]==a[i-1]) u[u.size()-1].h++;
			else u.push_back({a[i],1});
		}
		unordered_map<int,bool> mp;
	    vector<node> v;
        for(int i=0;i<=u.size()-1;i++){
    	    v.clear();
    	    mp.clear();
    	    for(int j=i;j<=u.size()-1;j++){
    		    if(mp[u[j].o]){
    			    while(v.back().o!=u[j].o) mp[v.back().o]=0,v.pop_back();
    			    if(v.back().o==u[j].o) v.pop_back();
    			    v.push_back(u[j]);
			    }else v.push_back(u[j]),mp[u[j].o]=1;
		    }
		    for(auto g:v) ans[g.o]+=g.h;
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
		return 0;
	}
	unordered_map<int,bool> mp;
	vector<int> v;
    for(int i=1;i<=n;i++){
    	v.clear();
    	mp.clear();
    	for(int j=i;j<=n;j++){
    		if(mp[a[j]]){
    			while(v.back()!=a[j]) mp[v.back()]=0,v.pop_back();
    			if(v.back()==a[j]) v.pop_back();
    			v.push_back(a[j]);
			}else v.push_back(a[j]),mp[a[j]]=1;
		}
		for(auto g:v) ans[g]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
