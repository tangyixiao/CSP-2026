#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m,ans;
bool a[35][200005],vis[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		ll x;
		cin>>x;
		for(int j=29;j>=0;j--){
			a[j][i]=x&(1<<j);
		}
	}
	vector<int> zero; 
	for(int i=29;i>=0;i--){
		ll ct0=0,ct1=0;
		zero.clear();
		for(int j=1;j<=n;j++){
			if(!vis[j]){
				if(a[i][j]){
					ct1++;
				}else{
					ct0++;
					zero.push_back(j);
				}
			}
		}
		if(ct1>=m){
			ans+=1<<i;
			for(int j:zero){
				vis[j]=1;
			}
		}
	}
	cout<<ans<<"\n";
	return 0;
} 
