#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
bool sum[300005];
int wei[300005];
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
	}
	for(int j=1;j<=n;j++){
		stack<int> q;
		for(int i=j;i<=n;i++){
		if(q.empty()){
			q.push(a[i]);
			sum[a[i]]=1;
			wei[a[i]]=1;
		}
		else{
			if(!sum[a[i]]){
				q.push(a[i]);
			sum[a[i]]=1;
			wei[a[i]]=q.size();
			}
			else{
				while(q.size()>=wei[a[i]]){
					sum[q.top()]=0;
					q.pop();
				}
				q.push(a[i]);
				sum[a[i]]=1;
				wei[a[i]]=q.size();
			}
		}
	}
     for(int i=1;i<=m;i++){
     	if(sum[i]){
     		ans[i]++;
     		sum[i]=0;
		 }
	 }

	}
	for(int i=1;i<=m;i++){
     	cout<<ans[i]<<" ";
	 }
	return 0;
}