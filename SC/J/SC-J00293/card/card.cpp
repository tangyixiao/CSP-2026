#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],c[500005],t[300005];
int ans[300005],b[300005];
queue <int> q;
int main(){
//	freopen("card.in","r","in");
//	freopen("card.out","w","out");
	cin>>n>>m;
	memset(c,-1,sizeof(c));
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(t[a[i]]==0){
			t[a[i]]=i;
			continue;
		}
		c[t[a[i]]]=i;
		t[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(c[j]!=-1) j=c[j]-1;
			else if(b[a[j]]==0){
				q.push(a[j]);
				b[a[j]]=1;
			}
		}
		while(!q.empty()){
			ans[q.front()]++;
			b[q.front()]=0;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
