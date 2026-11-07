#include <bits/stdc++.h>
using namespace std;
const int N=2e6+5;
long long a[N];
bool d[N];
long long n,m;
long long Max=INT_MIN;
void dfs(long long deep,long long sum){
	if(deep==m){
		Max=max(Max,sum);
		return;
	}
	for(int i=1;i<=n;++i){
		if(!d[i]){
			d[i]=true;
			if(deep==0){
				sum=a[i];
			}
			dfs(deep+1,sum&a[i]);
			d[i]=false;
		}
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	dfs(0,0);
	cout<<Max;
	return 0;
} 
