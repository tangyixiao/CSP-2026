#include<bits/stdc++.h>
using namespace std;
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
long long n,m,a[200005],b[200005],p;
void ch(long long x,long long c){
	c++;
	if(c>m){
		return;
	}
	for(int i=1;i<=n;i++){
		if(b[i]!=1){
			b[i]=1;
			ch(a[i]&x,c);
			b[i]=0;
		}
		if(c==m){
			p=max(p,x&a[i]);
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		long long z=0;
		b[i]=1;
		ch(a[i],z);
		b[i]=0;
	}
	cout<<p;
	return 0;
}