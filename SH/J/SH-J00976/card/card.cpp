#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
long long n,m,a[N],ans,vis[M],cnt[M];
stack<long long>s;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)cin>>a[i];
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=n;j++)vis[j]=0;
		while(s.size())s.pop();
		for(long long j=i;j<=n;j++){
			if(!vis[a[j]]){s.push(a[j]);vis[a[j]]=1;}
			
			else{
				while((!s.empty())&&s.top()!=a[j]){
						vis[s.top()]=0;s.pop();
				
				}
				s.pop();
				s.push(a[j]);
				
			}
			
		}
		for(long long j=1;j<=m;j++){
			if(vis[j])cnt[j]++;
		}
		
	}
	for(long long i=1;i<=m;i++)cout<<cnt[i]<<" ";
	return 0;
	
	
	
	
	
}
