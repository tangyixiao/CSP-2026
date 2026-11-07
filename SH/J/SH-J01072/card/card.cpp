#include<bits/stdc++.h>
using namespace std;
int a[500010],ans[300010],l[500010],r[500010];
bool vis[500010]; 
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	unordered_map<int,int> p1,p2;
	for(int i=1;i<=n;i++){
		if(p1.count(a[i])){
			l[i]=p1[a[i]];
		}
		p1[a[i]]=i;
	}
	for(int i=n;i>=1;i--){
		if(p2.count(a[i])){
			r[i]=p2[a[i]];
		}else{
			p2[a[i]]=i;
		}
	}
	for(int i=n;i>=1;i--){
		if(vis[i]){
			continue;
		}
		int k=1,o=i;
		while(l[o]){
			o=l[o];
			vis[o]=1;
			k++;
		}
		for(int j=i;j<=n;j++){
			if(r[j]){
				j=r[j];
			}
			ans[a[j]]+=k;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
