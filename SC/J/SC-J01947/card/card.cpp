#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],c[500005],t[300005];
queue<long long>q[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)q[m].pop();
		for(long long j=i;j<=n;j++){
			q[a[j]].push(j);
			if(q[a[j]].size()>1){
				for(int k=1;k<=m;k++){
					if(!q[j].empty()&&q[k].front()>q[a[j]].front()&&q[k].front()<j)q[k].pop();
				}
				q[a[j]].pop();
			}
		}
		for(int j=1;j<=m;j++){
			if(!q[j].empty())t[j]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<t[i]<<' ';
	return 0;
}