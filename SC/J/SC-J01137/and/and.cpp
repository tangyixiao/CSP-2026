#include<bits/stdc++.h>
using namespace std;
const int N=2e5+100;
struct node{
	long long x[31];
	long long kl=0;
	long long yu;
	long long ws=1;
}q[N];
long long n,m,ans=0;
long long a[N];
int cmp(node x,node y){
	if(x.kl==y.kl){
		return x.yu>y.yu;
	}else{
		return x.kl>y.kl;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		q[i].yu=a[i];
	}
	for(int i=1;i<=n;i++){
		int mol=0;
		for(int j=30;j>=0;j--){
			q[i].x[j]=(a[i]>>j);
			if(q[i].x[j]%2==0){
				q[i].x[j]=0;
			}else{
				q[i].x[j]=1;
				q[i].kl++;
			}
		}
	}
	sort(q+1,q+n+1,cmp);
	long long ans=q[1].yu;
	for(int i=2;i<=m;i++){
		ans=(ans&q[i].yu);
	}
	cout<<ans;
	return 0;
}
