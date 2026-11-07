#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m;
int a[N],num[N],ans[N],f[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=500){
	for(int i=1;i<=n;i++){
		int num[N];
		queue<int>q;
		queue<int>nq;
		for(int k=1;k<=m;k++){
			num[k]=0;
		}
		for(int j=i;j<=n;j++){
			if(num[a[j]]!=0){
				while(q.front()!=a[j]){
					nq.push(q.front());
					q.pop();
				}
				while(!q.empty()){
					num[q.front()]--;
					q.pop();
				}
					
				while(!nq.empty()){
					q.push(nq.front());
					nq.pop();
				}
			}
			q.push(a[j]);
			num[a[j]]++;
		}
		while(!q.empty()){
			int t=q.front();
			q.pop();
			ans[t]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
		}
	}
	else{
		int num[N];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++)
				num[j]=0;
			for(int j=i;j<=n;j++){
				if(a[j]==a[j-1]&&j!=i)
					continue;
				num[a[j]]++;
			}
			for(int j=1;j<=m;j++){
				if(num[j]>=1)
					ans[j]++;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
	}
	return 0;
}