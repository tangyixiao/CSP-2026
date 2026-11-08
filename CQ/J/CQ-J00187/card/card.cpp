#include<bits/stdc++.h>
#include<stack>
using namespace std;
long long m,n,a[500005],cnt[500005];
stack<long long> x;
bool dp[500005];
void work(stack<long long> b,int y){
	for(int j=y; j<=m; j++){
		if(dp[a[j]]==1){
			b.pop();
			while(b.top()!=a[j]){
				dp[b.top()]=0;
				b.pop();
			}
		}
		else dp[a[j]]=1;
	}
	for(int j=1; j<=n; j++){
		if(dp[j]==1)cnt[j]++;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>m>>n;
	for(int i=1; i<=m; i++){
		cin>>a[i];
		x.push(a[i]);
	}
	for(int i=1; i<=m; i++){
		memset(dp,0,sizeof(dp));
		work(x,i);
	}
	for(int i=1; i<=n; i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
} 
