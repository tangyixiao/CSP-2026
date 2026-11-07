#include<bits/stdc++.h>
using namespace std;
#define int long long
//hope pts50
const int N=2e5+10;
int ans,n,nm,cnt_and=INT_MAX,mx;
vector<int> vec;
map<int,int> mp;
int dfs(int ans_sum,int m){
	if(m>nm) return ans=max(ans,ans_sum);
	if(mp.count(m)) 
		if(mp[m]&ans_sum==ans_sum) return 0;
		else if(mp[m]&ans_sum==mp[m]) mp[m]=ans_sum;
	else mp[m]=ans_sum;
	m++;
	for(int i=0;i<vec.size();i++){
		int tmp=vec[i];
		vec.erase(vec.begin()+i);
		dfs(ans_sum&vec[i],m);
		vec.insert(vec.begin()+i,tmp);
	}
	return 0;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>nm;
	vec.resize(n);
	for(int i=0;i<n;i++) cin>>vec[i],cnt_and&=vec[i],mx=max(mx,vec[i]);
	if(nm==n){
		cout<<cnt_and;
		return 0;
	}
	if(nm==1){
		cout<<mx;
		return 0;
	}
	dfs(INT_MAX,0);
	cout<<ans;
	return 0;
} 
//PA
