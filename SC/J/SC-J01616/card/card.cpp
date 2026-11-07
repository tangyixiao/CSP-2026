#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500005]={},f=0,ans[300005]={},t[300005]={},l[300005]={};
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i>0 && a[i]<a[i-1]) f=1;
	}
	if(n<=10000){
		stack<int> q;
		for(int i=0;i<n;i++){
			for(int k=1;k<=m;k++) t[k]=0;
			for(int j=i;j<n;j++){
				if(t[a[j]]>0){
					while(q.top()!=a[j]){
						t[q.top()]=0;
						q.pop();
					}
				}else{
					q.push(a[j]);
					t[a[j]]=1;
				}
			}
			for(int i=1;i<=m;i++){
				if(t[i]>0) ans[i]++;
			}
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	}
	else if(f==0){
		for(int i=0;i<n;i++){
			t[a[i]]++;
			l[a[i]]=i+1;
		}
		for(int i=1;i<=m;i++) cout<<l[i]<<' ';
	}else cout<<"0";
	return 0;
}