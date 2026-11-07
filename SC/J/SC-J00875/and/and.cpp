#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int n,m;
vector<int> v[100];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		int ca=a;
		int p=1;
		while(a){
			if(a%2) v[p].push_back(ca);
			a/=2;
			++p;
		}
	}
//	for(int i=50;i>=1;i--) cout<<two[i];
	int maxp=0;
	for(int i=50;i>=1;i--){
//		cout<<v[i].size()<<" ";
		if((int)(v[i].size())>=m){
			maxp=i;
			break;
		}
	}
	if(maxp==0) {
		cout<<0<<"\n";
		return 0;
	}
	int si=v[maxp].size();
	int ans=v[maxp][0];
	for(int i=1;i<si;i++){
//		cout<<ans<<" "<<v[maxp][i]<<"\n";
		ans&=v[maxp][i];
	}
	cout<<ans<<"\n";
}