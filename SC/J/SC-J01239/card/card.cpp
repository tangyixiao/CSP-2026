#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
bool l[500005];
int cnt[500005];
int main(){
	freopen("card.in","r",stdin);freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		stack<int>q;
		for(int j=i;j<=n;j++){
			if(l[a[j]]==0){
				l[a[j]]=1;
				q.push(a[j]);
			}
			else{
				while(q.top()!=a[j]){
					l[q.top()]=0;
					q.pop();
				}
			}
		}
		while(!q.empty()){
			l[q.top()]=0;
			cnt[q.top()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
	return 0;
} 