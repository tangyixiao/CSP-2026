#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
vector<pair<int,char>> h(200005);
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin >>n;
	for(int i=1;i<=n;++i){
		cin >>h[i].first>>h[i].second;
	}
	int l=1,r=n;
	int zs=0;
	while(l<r){
		if(h[l].second!=h[r].second){
			if(h[l].first>h[r].first){
				zs+=h[r].first;
				h[l].first-=h[r].first;
				r--;
			}else if(h[l].first<h[r].first){
				zs+=h[l].first;
				h[r].first-=h[l].first;
				l++;
   			}else{
				zs+=h[r].first;
				r--;l++;
			}
		}else{
			if(h[l].first>h[r].first){
				h[l].first-=h[r].first;
				r--;
			}else if(h[l].first<h[r].first){
				h[r].first-=h[l].first;
				l++;
			}else{
				l++;r--;
			}
		}
	}
	cout<<zs;
	return 0;
}
