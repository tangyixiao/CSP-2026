#include<bits/stdc++.h>
using namespace std;
vector<long long>f,g;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	long long n,m;cin>>n>>m;
	for(long long i=1;i<=n;i++){
		long long x;cin>>x;
		f.emplace_back(x);
	}
	long long ans=0;
	for(long long i=31;i>=0;i--){
		long long pw=(1ll<<i),k=0;g.clear();
		for(long long j:f){
			if(j&pw){
				g.emplace_back(j);k++;
			}
		}
		if(k>=m){
			swap(f,g);ans+=pw;
		}
	}
	cout<<ans;return 0;
}

/*
关注洛谷 hb314 ，欣赏时代巨作《周桐玥武的算法圣殿》 
*/