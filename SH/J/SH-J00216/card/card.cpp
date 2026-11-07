#include<bits/stdc++.h>
using namespace std;
int p[500005];int ans[300005];
stack<int>a;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&p[i]);
	}
	for(int i=1;i<=n;i++){
		bool m[300005];
		for(int za=1;za<=30001;za++) m[za]=0;
		for(int j=i;j<=n;j++){
			int x=p[j];
			if(m[x]==1){
				while(a.empty()==0){
					if(a.top()!=x){
						m[a.top()]=0;
						a.pop();
					}
					else break;
				}
				if(a.empty()==0) a.pop();
			}
			a.push(x);m[x]=1;
		}
		while(a.empty()==0){
			ans[a.top()]++;
			
			a.pop();
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
}
