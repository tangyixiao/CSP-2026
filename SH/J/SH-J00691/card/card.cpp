#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005];
queue<int> v;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){ 
		for(int j=i;j<=n;j++){
			v.push(a[j]);
			for(int k=j+1;k<=n;k++){
				if(a[k]==a[j]){
					for(;k>1;k--) v.pop();
					break;
				}
			}
		}
		while(!v.empty()){
			ans[v.front()]++;
			v.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
