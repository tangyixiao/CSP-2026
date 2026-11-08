#include<bits/stdc++.h>
#define int long long
using namespace std;
const int BIT=31;
const int N=2e5+5;
vector<int>vec;
int nbit=30;
int n,m;
int ans=0;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		vec.push_back(x);
	}
	for(;nbit>=0;nbit--){
		int cnt=0;
		vector<int>temp;
		for(int i=0;i<(int)vec.size();i++)if((vec[i]>>nbit)&1)cnt++;
		if(cnt>=m){
			ans+=(1<<nbit);
			for(int i=0;i<(int)vec.size();i++)if((vec[i]>>nbit)&1)temp.push_back(vec[i]);
			vec=temp;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/
