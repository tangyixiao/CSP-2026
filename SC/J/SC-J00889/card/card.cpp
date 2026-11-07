#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[200050],ans[200050],cnt,pre[200050];
void spc(){
	for(ll i=1;i<=m;i++){
		if(i==m){
			cout<<n;
		}else{
			cout<<pre[i]<<" ";
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=a[i-1]) cnt++;
		if(a[i]!=a[i-1]) pre[a[i-1]]=i-1;
	}
	
	if(cnt==n){
		spc();
		return 0;
	}
	
	for(ll j=1;j<=n;j++){
		stack<ll> q;
		ll flag[200050];
		for(ll k=0;k<=200000;k++){
			flag[k]=0;
		}
		for(ll i=j;i<=n;i++){
			if(flag[a[i]]==1){
				
				while(q.top()!=a[i]){
					flag[q.top()]=0;
					//cout<<a[i]<<":"<<flag[a[i]]<<endl;
					q.pop();
				}
			}else{
				q.push(a[i]);
				flag[a[i]]=1;
				//cout<<a[i]<<":"<<flag[a[i]]<<endl;
			} 
		}
	//	while(q.empty()==0){
	//		cout<<q.top()<<" ";
	//		q.pop();
	//	}
	//	cout<<endl;
		for(ll b=1;b<=m;b++){
			if(flag[b]==1){
				ans[b]++;
			}
		}
	}
	for(ll i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}