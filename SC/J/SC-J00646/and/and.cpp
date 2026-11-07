#include<iostream>
#include<cstdio>
using namespace std;
long long ans;
int a[200010],two[200010][35],n,m;
void go(int i,long long res,int last){
	if(i==m+1){
		ans=max(ans,res);
		return;
	}
	if(n-last<m-i+1){
		return;
	}
	for(int j=last+1;j<=n;j++){
		go(i+1,res&a[j],j);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	int maxn=1;
	long long asum=2e32-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		asum&=a[i];
		maxn=max(maxn,a[i]);
//		int t=a[i];
//		int b[35],top=0;
//		while(t!=0){
//			b[++top]=t%2;
//			t/=2;
//		}
//		for(int j=top,k=1;j>=1;j--,k++){
//			two[i][k]=b[j];
//		}
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}
	if(m==n){
		cout<<asum;
		return 0;
	}
	go(1,2e32-1,0);
	cout<<ans;
	return 0;
} 