#include<bits/stdc++.h>
#include<queue>
using namespace std;
queue<int> a;
int n,m,x[100005],i,o[100005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","r",stdout);
	cin>>n>>m;
	int ans[m+3];
	for(int i=1;i<=n;i++){ 
		for(int j=i;j<=n;j++){
			cin>>x[j];
			if(j>1){
				for(int k=i;k<=j;k++){
					if(x[j]==x[k]){
						for(int l=k;l<j;l++){ 
							a.pop();
							x[l]=0;
						}
					}
				}
			}
			a.push(x[j]);
		}
		for(int j=1;j<=m;j++){
			for(int k=1;k<=n;k++){
				if (x[k]==j){
					ans[j]++;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}