#include<bits/stdc++.h>
using namespace std;
using i32=int;
#define int long long
i32 main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> v(n);
	vector<int> position(m+1,-1);
	vector<int> cnt(m+1);
	for(int i=0;i<n;i++){
		cin>>v[i];
		position[v[i]]=max(position[v[i]],i);
	}
//	for(auto i:v)
//		cout<<i<<" ";
//	cout<<"\n";
//	for(auto i:position)
//		cout<<i<<" ";
//	cout<<"\n";
	for(int i=0;i<n;i++){
		vector<int> mem(n,0);
		for(int j=i;j<n;j++){
			if(mem[j]==1)
				continue;
//			cout<<v[j]<<" ";
			cnt[v[j]]++;
			mem[j]=1;
			for(int k=j;k<=position[v[j]];k++)
				mem[k]=1;
		}
//		for(int j=i;j<n;j++)
//			if(mem[j]==0)
//				cout<<v[j]<<" ";
//		cout<<"\n";
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i];
		if(i!=m)
			cout<<" ";
	}
	return 0;
} 
