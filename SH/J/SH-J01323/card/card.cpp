#include <bits/stdc++.h>
using namespace std;
int ans[300030],a[300030],cnt[300030];
stack <int> s;
void init(){
	for(int i=0;i<=300000;i++)cnt[i]=0;
	while(!s.empty()){
		s.pop();
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int u;
	for(int i=1;i<=n;i++){
		init();
		for(int j=i;j<=n;j++){
			int x=a[j];
			if(cnt[x]==0){
				cnt[x]++;
			}else{
				do{	
					u=s.top();
					cnt[u]--;
					s.pop();
				}while(u!=x);
				cnt[x]++;
			}
			s.push(x);
		}
		for(int j=1;j<=m;j++){
			if(cnt[j]!=0){
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
