#include<bits/stdc++.h>
using namespace std;
int n,m;
bool f1,f2;
long long a[200005],k;
void h(int i,long long v,int l){
	if(v<k) return;
	if(l==m){
		k=v;
		return;
	}
	if(i>=n||i+m-l>n)return;
	//0
	h(i+1,v,l);
	//1
	if(v==0) v=a[i];
	else v&=a[i];
	h(i+1,v,l+1);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(pow(2,int(log2(a[i]+1)))!=a[i]+1)f1=1;
		if(a[i]==i-1)f2=1;
	}
	if(n==m){
		long long o=a[1];
		for(int i=2;i<=n;i++){
			o&=a[i];
		}
		cout<<o;
		return 0;
	}
	if(m==1){
		long long o=0;
		for(int i=1;i<=n;i++){
			o=max(a[i],o);
		}
		cout<<o;
		return 0;
	}
	if(!f1){
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
		return 0;
	}
	h(1,0,0);
	cout<<k;
	return 0;
}