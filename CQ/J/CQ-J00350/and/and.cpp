#include<bits/stdc++.h>
#define int long long
using namespace std;
namespace T3{
	const int MAXN=2e5+5;
	int N,M,a[MAXN];
	vector<int>vec;
	signed main(){
		freopen("and.in","r",stdin);
		freopen("and.out","w",stdout);
		ios::sync_with_stdio(0);
		cin.tie(0);cout.tie(0);
		cin>>N>>M;
		for(int i=1;i<=N;i++)cin>>a[i];
		for(int i=1;i<=N;i++)vec.push_back(a[i]);
		for(int i=35;i>=0;i--){
			vector<int>tmp;
			for(size_t j=0;j<vec.size();j++){
				int t=(1LL<<i);
				if(vec[j]&t)tmp.push_back(vec[j]);
			}
			int len=tmp.size();
			if(len>=M)vec=tmp;
		}
		int Ans=vec[0];
		for(int i=1;i<M;i++)Ans&=vec[i];
		cout<<Ans;
		return 0;
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	T3::main();
	return 0;
}
//内存：4264KB
//时间：O(NlogN)
//预估分数：100pts 
