#include<bits/stdc++.h>
using namespace std;
int a[500010];
int b[500010];
stack<int>last[300010];
int ans[300010];
bool v[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			a[j]=b[j];
		}
		for(int j=1;j<=m;j++){
			while(!last[j].empty())last[j].pop();
		}
		for(int j=i;j<=n;j++){
			if(!last[a[j]].empty()){
				for(int k=j-1;a[k]!=a[j];k--){
					if(a[k]==0)continue;
					last[a[k]].pop();
					a[k]=0;
				}
				a[last[a[j]].top()]=0;
				last[a[j]].pop();
			}
			last[a[j]].push(j);
		}
		for(int j=1;j<=m;j++)v[j]=0;
		for(int j=i;j<=n;j++){
			//cout<<a[j]<<" ";
			v[a[j]]=1;
		}
		for(int j=1;j<=m;j++)if(v[j])ans[j]++;
		//cout<<endl;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
//3 1 2 1 3 2 3 1 2 1
