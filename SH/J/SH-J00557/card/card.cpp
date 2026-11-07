#include <bits/stdc++.h>
using namespace std;
long long bc[300030],cds[300030];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;cin>>n>>m;map<long long,long long> mp;
	for(long long i=1;i<=n;i++){
		cin>>cds[i];
		mp[cds[i]]=i;
	}
	for(long long i=1;i<=n;i++){
		long long l=i;
		while(l<n){
			bc[cds[l]]++;
			l=mp[cds[l]];
			l++;
		}
		bc[cds[l]]++;
	}
	for(long long i=1;i<=m;i++) cout<<bc[i]<<" ";
	return 0;
}
