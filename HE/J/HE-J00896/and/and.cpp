#include<bits/stdc++.h>
using namespace std;

int const N=1e5+10;
long long a[N];
priority_queue<long long> que;
int s;
long long x;
int n,m;
void dfs(int t){
	if(t==m){
		x=x&a[s];
		que.push(x);
		return;
	}
	x=x&a[s];
	s++;
	t++;
	dfs(t);
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d",&n);
	scanf("%d",&m);
	for(long long i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(long long i=1;i<=n-m+1;i++){
		s=i+1;
		x=a[i];
		dfs(1);
	}
	printf("%lld",que.top());
	
	return 0;
}
