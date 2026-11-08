#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
const int N=2e5+10;
vector<int>b[30];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	vector<int>a(n+1);
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=0;j<30;j++){
			if(a[i]&(1<<j)){
				b[j].push_back(a[i]);
			}
		}
	}
	int x=-1;
	for(int i=29;i>=0;i--){
		if(b[i].size()>=m){
			x=i;
			break;
		}
	}
	if(x==-1){
		cout<<0;return 0;
	}
	vector<int>ans;
	while(1){
		vector<int>new_a=b[x];
		for(int i=0;i<30;i++) b[i].clear();
		for(int i:new_a){
			for(int j=0;j<x;j++){
				if(i&(1<<j)){
					b[j].push_back(i);
				}
			}
		}
		int X=-1;
		for(int i=x-1;i>=0;i--){
			if(b[i].size()>=m){
				X=i;
				break;
			}
		}
		if(X==-1){ 
			ans=new_a;
			break;
		}
		else x=X;
	}
	int Ans=ans[0];
	for(int i=1;i<m;i++){
		Ans&=ans[i];
	}
	cout<<Ans<<'\n';
	return 0;
}
