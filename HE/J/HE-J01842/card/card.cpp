#include<bits/stdc++.h>
using namespace std;
int n,m;
int cnt;
int a[200010];
int b[300010];
int f[300010];
queue <int> q;
int main(){
	freopen ("card.in","r",stdin);
	freopen ("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>cnt;
		q.push(cnt);
	}
	for (int i=1;i<=n;i++){
		f[q.front()]++;
		a[1]=q.front();
		q.pop();
		int p=1;
		memset(f,0,sizeof f);
		while (q.size()){
			if (f[q.front()]==0){
				a[++p]=q.front();
				q.pop();
			}else {
				int minm=10000000;
				f[q.front()=1];
				for (int w=1;w<=n;w++){
					if (a[i]==q.front()){
						a[i]=0;
						minm=min(minm,i);
					}
				}
				for (int x=minm;x<=p;x++){
					f[a[x]]--;
					a[x]=0;
				}
			}
			
		}
		for (int j=1;j<=n;j++){
			q.push(a[j]);
		}
		for (int x=1;x<=m;x++){
			if (f[x]>0){
				b[x]+=f[x];
			}
		}
	}
	for (int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
}
