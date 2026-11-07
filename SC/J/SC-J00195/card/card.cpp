#include<bits/stdc++.h>
using namespace std;

int a[500005],c[500005],ans[500005],anss[300005];
vector<int>v[300005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		v[a[i]].push_back(i);
	}
	
	for(int i=n;i>=1;i--){
		if(c[i]==0){
			for(auto x:v[a[i]]){
				c[x]=i;
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		if(c[i]==0||c[i]==i){
			int p=i;
			while(i<=n&&(c[i]==0||c[i]==i)){
				i++;
			}
			for(int j=p;j<i;j++){
				c[j]=i;
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		int j=i;
		while(j<=n){
			if(a[j]!=a[c[j]]){
				ans[j]++;
				ans[c[j]]--;
			}
			j=c[j];
		}
	}
	
	for(int i=1;i<=n;i++){
		ans[i]=ans[i-1]+ans[i];
		anss[a[i]]+=ans[i];
	}
	
	for(int i=1;i<=m;i++){
		cout<<anss[i]<<" ";
	}
	
	return 0;
}