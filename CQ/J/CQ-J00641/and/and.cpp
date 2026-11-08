#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=20000005;
int n,m;
long long a[N],cnt=0,maxn=0;
void exp(int x,int l,int sum){
	if(l==m){
		cnt=sum;
		maxn=max(cnt,maxn);
		return ;
	}
	f(i,x,n) exp(i+1,l+1,sum&a[i]);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	f(i,1,n) cin>>a[i];
	f(i,1,n) exp(i+1,1,a[i]);
	cout<<maxn<<endl;
}
