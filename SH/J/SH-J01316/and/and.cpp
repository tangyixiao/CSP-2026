#include<bits/stdc++.h>
#define int long long
#define N 500005
using namespace std;
int n,m,a[N],t[50];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=35;j++)t[j]+=((a[i]>>j)&1);
	}
	int s=0;
	for(int i=0;i<=35;i++)if(t[i]>=m)s|=(1<<i);
	vector<int> vec;
	int cnt=0;
	while(s){
		if(s&1)vec.push_back(1<<cnt);
		s>>=1;
		cnt++;
	}
	for(int mask=(1<<vec.size())-1;mask>=0;mask--){
		int k=0;
		for(int i=0;i<vec.size();i++)
			if((mask>>i)&1)k+=vec[i];
		int cnt=0;
		for(int i=1;i<=n;i++)cnt+=((k&a[i])==k);
		if(cnt>=m){
			cout<<k;
			return 0;
		}
	}
	return 0;
} 


