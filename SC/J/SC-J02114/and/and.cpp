#include<bits/stdc++.h>
using namespace std;
long long n,m,ans,a[200005],f[35];
vector<long long> e[35];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	f[0]=1;
	for(int i=1;i<=30;i++) f[i]=f[i-1]*2;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=0;j<=30;j++){
			if(a[i]&f[j]) e[j].push_back(a[i]);
		}
	}
	for(int i=30;i>=0;i--){
		if(e[i].size()>=m){
			ans+=f[i];
			for(int j=i-1;j>=0;j--) e[j].clear();
			for(int j=0;j<e[i].size();j++){
				for(int k=0;k<i;k++){
					if(e[i][j]&f[k]) e[k].push_back(e[i][j]);
				}
			}
		}
	}
	cout<<ans;
	
	return 0;
}
/* er deng yao xiang xin ping ce ji , ta hui dai ling ru zhi chang shu zou xiang sheng li !!! (O((900+)*n)) */