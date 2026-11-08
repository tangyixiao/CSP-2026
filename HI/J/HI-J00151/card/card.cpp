#include <bits/stdc++.h>
using namespace std;
long long a[500005];
long long b[300005];
bool bj[300005];
vector<long long> x;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		memset(bj,0,sizeof(bj));
		for(int j=i;j<n;j++){
			if(bj[a[j]]){
				while(x.back()!=a[j]) x.pop_back();
			}else{
				x.push_back(a[j]);	
				bj[a[j]]=1;
			}
		}
		for(int j=0;j<x.size();j++){
			b[x[j]]++;
		}
		while(!x.empty()) x.pop_back();
	}
	for(int i=1;i<m+1;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
