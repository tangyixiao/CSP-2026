#include<bits/stdc++.h>
using namespace std;
long long ans[100010];
long long a[200010];
long long n,m;
long long lsta;
map<long long,bool> mp;
int main(){
	freopen("card4.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n;cin>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		mp.clear();
		for(int j=i;j<=n;j++){
			if(j==i){
				lsta=a[j];
				mp[a[j]]=1;
			}else{
				if(a[j]!=lsta){
					mp[a[j]]=1;
					lsta=a[j];
				}
			}
		}
		for(auto x:mp){
			ans[x.first]++;
		}
	} 
	for(long long i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
