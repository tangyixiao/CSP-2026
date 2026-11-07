#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5,M=1e5+5;
int n,m;
int a[N];
int t=0;
int c[M];
stack<int> q;
bool f=true;
int b[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;++i) {
		cin>>a[i];
		if(a[i]<a[i-1])
		f=false;
	}
	if(f){
		for(int i=1;i<=n;++i)
		cout<<i<<" ";
		return 0;
	}
	while(t<=n){
		t++;
		for(int i=1;i<=m;++i) b[i]=0;
		for(int i=t;i<=n;++i){
			if(b[a[i]]==0) b[a[i]]=i,q.push(a[i]);
			else {
				int z=i-b[a[i]]-1;
				while(z>0){
					q.pop();
					z--;
				}
			}
		}
		while(!q.empty()){
			c[q.top()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;++i){
		cout<<c[i]<<" ";
	}
	return 0;
}

