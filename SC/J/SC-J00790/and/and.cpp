#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200001],b[200001],mmax;
void js(int x){
	if(b[x]>n){
		b[x-1]++,b[x]=b[x-1]+1;
		js(x-1);
	}
	if(x!=m){
		b[x+1]=b[x]+1;
		js(x+1);
	}
	if(b[1]>=n-m+1)return;
	long long ans=b[1];
//	for(int i=1;i<=x;i++)cout<<b[i]<<" ";
//	cout<<'\n';
	for(int i=2;i<=x;i++)ans&=b[i];
	mmax=max(mmax,ans);
	b[x]++;
	js(x);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	b[1]=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	js(1);
	long long ans=b[n-m+1];
	for(int i=n-m+2;i<=n;i++)ans&=b[i];
	mmax=max(mmax,ans);
	cout<<mmax;
	return 0;
}