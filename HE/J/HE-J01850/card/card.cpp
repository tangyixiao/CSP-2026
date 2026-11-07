#include<bits/stdc++.h>
using namespace std;
int n,m;
int cd[500001];
int ans[300001];
int l[300001];
int main(){
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	memset(l,-1,sizeof l);
	for(int i=0;i<n;i++){
		cin>>cd[i];
		l[cd[i]]=i;
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
		if(l[cd[j]]!=-1)j=l[cd[j]];
		ans[cd[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
} 
