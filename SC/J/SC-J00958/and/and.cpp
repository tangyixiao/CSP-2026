#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m1,maxn=-1;
int a[N],b[N];
void f(int c,int da,int m){
	if(c==m+1){
		maxn=max(maxn,da);
		return ;
	}
	for(int i=1;i<=n;i++){
		if(b[i]!=1){
			int k=da;
			if(c!=1)	k=k&a[i];
			else k=a[i];
			b[i]=1;
			f(c+1,k,m);
			b[i]=0;	
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m1;
	for(int i=1;i<=n;i++)	cin>>a[i];
	f(1,0,m1);
	cout<<maxn;
	return 0;
}