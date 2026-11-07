#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+50;
int n,m,ans;
int a[N];
vector<int> ve[40],w,v1,v2;
bool F,F2;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=35;j>=0;j--)
			if((a[i]>>j)&1)
				ve[j].push_back(a[i]);
	}
	for(int i=35;i>=0;i--){
		if(ve[i].size()<m) continue;
		if(!F){
			if(ve[i].size()==m){
				ans=ve[i][1];
				for(int u:ve[i]) ans=ans&u;
				cout<<ans;
				return 0;
			}else{
				ans+=(1<<i);
				w.push_back(i);
				F=1;
			}
			continue;
		}
		if(ve[i].size()>=m){
			F2=0;v1=ve[i];v2.clear();
			for(int v:w){
				for(int u:v1) if((u>>v)&1) v2.push_back(u);
				if(v2.size()<m){F2=1;break;}
				v1=v2;v2.clear();
			}
			if(!F2){
				ans+=(1<<i);
				w.push_back(i);
			}
		}
	}
	cout<<ans;
	return 0;
} 
