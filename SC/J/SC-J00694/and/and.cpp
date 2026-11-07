#include<bits/stdc++.h>
using namespace std;
int a[2000005],b[2000005];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	sort(a+1,a+n+1,cmp);
	b[1]=a[1];
	for(int i=2;i<=n;i++)b[i]=b[i-1]&a[i];
	for(int i=1;i<=n-m;i++){
		int ans1=b[i+m-1]&(b[i+m-1]|b[i]);
		ans=max(ans1,ans);
	}
	if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++)ans=ans&a[i];
	}
	if(m==1)ans=a[n];
	cout<<ans;
	return 0;
} 