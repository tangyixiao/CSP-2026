#include <bits/stdc++.h>
using namespace std;
long long a[200005];
bool cmp(long long a,long long b){
	return a>b;
}
long long he(long long a,long long b){
	int a1[31]={},b1[31]={};
	long long cnt=1,ds=0;
	while (a>=cnt){
		cnt*=2;
	}
	for (int i=0;cnt>=1 && a>0;i++,cnt/=2){
		a1[i]=a/cnt;
		a-=a1[i]*cnt;
	}
	cnt=1;
	while (b>=cnt){
		cnt*=2;
	}
	for (int i=0;cnt>=1 && b>0;i++,cnt/=2){
		b1[i]=b/cnt;
		b-=b1[i]*cnt;
	}
	for (int i=0;i<=31;i++,cnt*=2){
		ds+=int(a1[i] && b1[i])*cnt;
	}
	return ds;
}
int main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for (long long i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	long long ans=a[0];
	for (long long i=1;i<m;i++){
		ans=he(ans,a[i]);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}