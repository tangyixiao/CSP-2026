#include<bits/stdc++.h>
using namespace std;
int n,m;
map<int,int>mp;
int a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		map<int,int>p;
		for(int j=i;j<=n;j++){
			if(p[a[j]]==0){
				
				p[a[j]]=1;
				mp[a[j]]++;
			}
		}
	}
	map<int,int>q;
	for(int i=1;i<=n;i++){
		if(q[a[i]]==0){
			cout<<mp[a[i]]<<' ';
			q[a[i]]=1;
		}
		
	}
	/*
	for(int i=1;i<=n;i++){
		int f=n;
		int b[500005];
		for(int j=1;j<=n;)b[j] = 0;
	;j<=n;j++){
		;i++){
		if(q[a[i]]==0){
			cout<<mp[i]<<' ';
			q[a[i]]=1;
		}
		
	}*/
	return 0;
}
