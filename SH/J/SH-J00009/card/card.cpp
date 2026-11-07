#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n],cnt[m+1];
	for(int i=0;i<n;i++)cin>>a[i];
	stack<int> x[n];
	for(int i=1;i<=m;i++)cnt[i]=0;
	for(int i=0;i<n;i++){
		bool can[m+1];
		for(int i=1;i<=m;i++)can[i]=false;
		for(int j=i;j<n;j++){
			if(can[a[j]]){
				while(a[j]!=x[i].top()){
					can[x[i].top()]=false;
					x[i].pop();
				}
			}else{
				x[i].push(a[j]);
				can[a[j]]=true;
			}
		}
		while(!x[i].empty()){
			cnt[x[i].top()]++;
			x[i].pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
