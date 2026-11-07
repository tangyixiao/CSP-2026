#include<bits/stdc++.h>
using namespace std;
int a[500005];
int ans[300005];
int n,m;
stack<int>p;
bool A(){
	bool l=1;
	for(int i=1;i<n;i++)if(a[i+1]<a[i])l=0;
	return l;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(A()){
		for(int h=1;h<=n;h++){
			bool k[m+5]={};
			for(int i=h;i<=n;i++){
				if(k[a[i]]==0){
					ans[a[i]]++;
					k[a[i]]=1;
				}
			}
		}	
	}
	else {
		for(int h=1;h<=n;h++){
			bool k[m+5]={};
			while(p.size()>0)p.pop();
			p.push(a[h]);
			k[a[h]]=1;
			for(int i=h+1;i<=n;i++){
				if(k[a[i]]==0){
					k[a[i]]=1;
					p.push(a[i]);
				}
				else {
					while(p.top()!=a[i]){
						k[p.top()]=0;
						p.pop();
					}
				}
			}
			for(int i=1;i<=m;i++){
				if(k[i]==1)ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}