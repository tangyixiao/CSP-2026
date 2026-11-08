#include<bits/stdc++.h>
using namespace std;
int n,m,x[500010],a[500010],t,b[500010],c[500010],N=1,v[500010];
queue<int>q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>x[i];
	while(N<=n){
		t=0;
		for(int i=1;i<=n;i++) a[i]=0;
		for(int i=1;i<=m;i++) b[i]=0;
		for(int i=N;i<=n;i++) q.push(x[i]);
		while(!q.empty()){
			a[++t]=q.front();
			b[a[t]]+=1;
			if(b[a[t]]==2){
				b[a[t]]=1;
				for(int i=1;i<=t;i++) a[i]=0;
				t=1;
				a[t]=q.front();
			}
			q.pop();
		}
		for(int i=1;i<=t;i++)
			v[a[i]]+=1;
		N+=1;		
	}
	for(int i=1;i<=m;i++) cout<<v[i]<<" ";
	return 0;
}
//Trick||Treat!
