#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,tt[500];
	int he[305]={0},ff[305]={0},tim[305]={0};
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>tt[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			ff[305]={0},tim[305]={0};
			if(ff[tt[j]]==1){
				for(int tw=tim[tt[j]];tw<j;tw++){
					ff[tt[tw]]=0;
				}	
			}
			ff[tt[j]]=1;
			tim[tt[j]]=j;
			
		}
		for(int j=i;j<=m;j++){
			if(ff[j]==1){
				he[j]+=1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<he[i]<<" ";
	}
	return 0;
}
