#include<iostream>
#include<algorithm>
using namespace std;
#define N 500001
#define M 300001
int n,m,i,a[N],s[M],r[M],c[M];
bool cmp(int A,int B){
	return r[A]<r[B];
}int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(i=1;i<=n;++i)cin>>a[i],r[a[i]]=i,++s[a[i]];
	for(i=1;i<=m;++i)c[i]=i;
	stable_sort(c+1,c+1+m,cmp);
	for(i=1;i<m;++i)s[a[r[c[i]]+1]]+=s[a[r[c[i]]]];
	for(i=1;i<=m;++i)cout<<s[i]<<' ';
	return 0;
}