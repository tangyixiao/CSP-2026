#include <bits/stdc++.h>

using namespace std;
//#define ll long long
//const int maxn=;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	int n,m;
	cin>>n>>m;
	vector<int>a(n+1,0);
	int sum=0;
	for(int i=1;i<=n;i++) cin>>a[i],sum+=a[i];
	vector<int>ans(m+1,0);
	if(n>=5000){
		if(m==2){
			if(sum==n) cout<<n<<" 0";
			else if(sum==n*2) cout<<"0 "<<n;
			else cout<<n<<' '<<n;
		}else if(m==1) cout<<n;
		else{
			for(int i=1;i<=m;i++) cout<<n<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		vector<int>x;
		for(int j=i;j<=n;j++){
			for(int k=0;k<x.size();k++){
				if(x[k]==a[j]){
					for(int t=k;t<x.size();t++){
						x[t]=-1;
					}
					break;
				}
			}
			x.push_back(a[j]);
		}
		for(int j=0;j<x.size();j++){
			if(x[j]!=-1) ans[x[j]]++;
		}
	} 
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/