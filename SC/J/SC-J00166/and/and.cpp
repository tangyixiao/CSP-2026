#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
#define int long long
int kth(int x,int k){
	return (x>>k)&1;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,tmp;
	cin>>n>>m;
	vector<int> a;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		a.push_back(tmp);
	}
	int ans=0;
	for(int i=30;i>=0;i--){
		vector<int> choose;
		for(int j=0;j<a.size();j++){
			if(kth(a[j],i)){
				choose.push_back(a[j]);
			}
		}
		if(choose.size()>=m){
			ans|=(1<<i);
			a.resize(choose.size());
			for(int j=0;j<=choose.size();j++){
				a[j]=choose[j];
			}
		}
	}
	cout<<ans;
}