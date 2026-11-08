#include<bits/stdc++.h>
using namespace std;
long long a[500005],da[500005],n,m;
bool x[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)cin>>a[i];
	for(long long i=1;i<=n;i++){
		stack<long long>q;
		for(long long j=1;j<=m;j++)x[j]=0;
		for(long long j=i;j<=n;j++){
			if(x[a[j]]==1){
				while(q.top()!=a[j])x[q.top()]=0,q.pop();
				q.pop();
			}
			q.push(a[j]),x[a[j]]=1;
		}
		for(long long j=1;j<=m;j++)da[j]+=x[j];
	}
		for(long long j=1;j<=m;j++)cout<<da[j]<<" ";
	return 0;
}

