#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,m,a[500005],ans[300005];
vector<int> id[300005]; 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >>n>>m;
	for(int i=1;i<=n;i++){
		cin >>a[i];
	}
	for(int i=n;i>=1;i--){
		id[a[i]].push_back(i);
		//ans[i]++;
		ll j=i;
		while(j<=n){
			ans[a[j]]++;
			if(id[a[j]].size()==1){
				j++;
			}else{
				j=id[a[j]][0]+1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout <<ans[i]<<" "; 
	}
	return 0;
} 
