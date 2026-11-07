#include<bits/stdc++.h>
#include<cstdio>
#include<cstdlib> 
using namespace std;
const int N=200026;
long long n,m,maxn=LLONG_MIN,a[N];
bool vis[N];
void fu__tion(long long cnt,long long now,size_t idx){
	if(cnt==m){
		maxn=max(maxn,now);
		return;
	}
	vis[idx]=1;
	for(size_t i=0;i<n;++i){
		if(vis[i])continue;
		long long n_=now&a[i];
		fu__tion(cnt+1,n_,i);
	}
	vis[idx]=0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;++i)cin>>a[i];
	for(int i=0;i<n;++i)fu__tion(1,a[i],i);
	cout<<maxn;
	return 0;
	cout<<"CCF的题太难了，我不会";
}
/*
 0000   00000  00000              0
0      0       0    0             0
0       0000   00000  000000      0
0           0  0             0    0
 0000  00000   0              0000
*/
