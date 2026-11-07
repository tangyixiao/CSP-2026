#include<bits/stdc++.h>
using namespace std;
stack <int>dracc;
int n,m,i,j,a[500010],v[300010],ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(j=1;j<=n;j++){
		for(i=j;i<=n;i++){
			if(v[a[i]]==j){
				for(;dracc.top()==a[i];){
					v[dracc.top()]=0;
					dracc.pop();
					
				}
			}
			dracc.push(a[i]);
			v[a[i]]=j;
		}
		for(;dracc.size();){
			ans[dracc.top()]+=1;
			dracc.pop();
		}
	}
	for(i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
