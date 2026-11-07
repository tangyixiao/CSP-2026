#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> v[35];
void mod(int a){
	int aa=a,cnt=0;
	while(aa){
		if(aa%2==1)v[cnt].push_back(a);
		aa/=2;
		cnt++;
	}
	return;
}
map<int,bool> mp;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		mod(a);
	}
	int ans=0;
	bool ff=true;
	for(int i=30;i>=0;i--){
		if(v[i].size()>=m&&ff){
			for(int j=0;j<v[i].size();j++){
				mp[v[i][j]]=true;
			}
			ff=false;
			ans+=pow(2,i);
		}
		else if(!ff){
			int cnt=0;
			map<int,bool> mm;
			for(int j=0;j<v[i].size();j++){
				if(mp[v[i][j]]==true){
					cnt++;
					mm[v[i][j]]=true;
				}	
			}
			mp=mm;
			if(cnt>=m){
				ans+=pow(2,i);
			}
		}
	}
	cout<<ans;
	return 0;
}