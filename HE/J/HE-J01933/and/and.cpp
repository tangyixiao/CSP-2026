#include <bits/stdc++.h>
using namespace std;
int dp[10001][10001],a[1000001];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,max=-999999999,sum;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
		}
	}
	sum=a[1];
	for(int i=2;i<=n;i++){
		sum&=a[i];
	}
	if(m==1){
		cout<<max;
		return 0;
	}
	else if(m==n){
		cout<<sum;
		return 0;
	}
    sort(a+1,a+n+1,cmp);
    cout<<a[m];
	return 0;
}
