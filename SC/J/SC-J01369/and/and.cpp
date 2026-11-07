#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
using namespace std;
const int N=2e5+5;
int n,m;
long long ans2=0;
long long a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1);
	long long ans=a[n];
	for(int i=n-1;i>n-m;i--){
		if(((ans&a[i])==0)&&n-m-1>-1){
			ans=a[i-1];
			m++;
		}
		else ans=(ans&a[i]);
	}
	ans2=a[n-1];
	for(int i=n-2;n-m>=0&&i>n-m-1;i--){
		if((ans2&a[i])==0&&n-m-1>-1){
			ans2=a[i-1];
			m++;
		}
		else ans2=(ans2&a[i]);
	}
	cout<<max(ans,ans2);
	return 0;
} 