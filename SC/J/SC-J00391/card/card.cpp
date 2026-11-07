#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	int n,m;cin>>n>>m;
	vector<int> A(n+1),Ans(n+1);
	for(int i=1;i<=n;i++)cin>>A[i];
	for(int i=1;i<=n;i++){
		vector<bool> flag(n+1,true);
		vector<int> pre(m+1,-1);
		for(int j=i;j<=n;j++){
			int cur=A[j],pos=pre[cur];
			if(pos!=-1&&flag[pos]==true)
				for(int k=pos;k<j;k++)flag[k]=false;
			pre[cur]=j;}
		for(int j=i;j<=n;j++)
			if(flag[j])Ans[A[j]]++;}
	for(int i=1;i<=m;i++)cout<<Ans[i]<<' ';
	return 0;}